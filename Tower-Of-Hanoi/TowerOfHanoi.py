#!/usr/bin/env python3

import time
import os

# colors
RESET= "\033[0m"
BOLD= "\033[1m"
CYAN= "\033[96m"
YELLOW= "\033[93m"
GREEN= "\033[92m"
WHITE= "\033[97m"
GRAY= "\033[90m"
RED= "\033[91m"

# 20 disks with different colors
DISK_COLORS= [
    "\033[91m", # red
    "\033[93m", # yellow
    "\033[92m", # green
    "\033[94m", # blue
    "\033[95m", # magenta
    "\033[96m", # cyan
    "\033[97m", # white
    "\033[31m", # dark red
    "\033[33m", # dark yellow
    "\033[32m", # dark green
    "\033[34m", # dark blue
    "\033[35m", # dark magenta
    "\033[36m", # dark cyan
    "\033[38;5;208m",  # orange
    "\033[38;5;129m",  # purple
    "\033[38;5;46m",   # bright green
    "\033[38;5;226m",  # bright yellow
    "\033[38;5;198m",  # pink
    "\033[38;5;51m",   # aqua
    "\033[38;5;220m",  # gold
]

# global state
pegs= {'A': [], 'B': [], 'C': []}
total_moves= 0
current_move= 0
last_move= ""

def draw(n):
    os.system('clear')  # clear terminal

    print(f"\n {BOLD}{YELLOW}TOWER OF HANOI{RESET} - {DISK_COLORS[3]}{n} disks{RESET}")
    print(f" {GRAY}Algorithm: RECURSION{RESET}\n")

    height= n
    peg_width= n*2+3   # widest disk = n*2-1 chars, + padding

    # rows from top to bottom
    for row in range(height, 0, -1):
        line= "  "
        for peg in ['A', 'B', 'C']:
            disks= pegs[peg]
            if len(disks)>=row:
                disk= disks[row-1]           # 1=smallest
                color= DISK_COLORS[disk-1]
                bar= "█" * (disk*2-1)   # █ is the disk character, you can also try with another char
                padded= bar.center(peg_width)  # center it in column
                colored= padded.replace(bar, f"{color}{bar}{RESET}")
                line+= colored + "   "
            else:
                pole= "|".center(peg_width)  # show pole(empty row)
                line+= f"{GRAY}{pole}{RESET}   "  # this extra space is for formatting
        print(line)

    # base line+labels
    base= "─" *peg_width
    print(f"  {GRAY}{base}   {base}   {base}{RESET}")
    print(f"  {'A'.center(peg_width)}   {'B'.center(peg_width)}   {'C'.center(peg_width)}\n")

    if last_move:
        print(f"  {WHITE}Move {GREEN}{current_move}{WHITE} / {total_moves}    {CYAN}{last_move}{RESET}\n")
    else:
        print(f"  {GRAY}(starting...){RESET}\n")


def move(n, source, target, helper, delay, total):
    """
    recursion:
      base case (n==1): move the single disk directly
      recursive case: move n-1 aside -> move big disk -> move n-1 back
    """
    global current_move, last_move

    if n==1:
        # base case
        disk= pegs[source].pop()  # take disk
        pegs[target].append(disk)  # put on target
        current_move+= 1
        last_move= f"Peg {source}  ->  Peg {target}"
        draw(total)  #redraw
        time.sleep(delay)
        return

    # recursive case
    move(n-1, source, helper, target, delay, total)   # move top n-1 to helper
    # now at ths stage, big disk is alone on source so moving it
    disk= pegs[source].pop()
    pegs[target].append(disk)
    current_move+= 1
    last_move= f"Peg {source}  ->  Peg {target}"
    draw(total)
    time.sleep(delay)
    move(n-1, helper, target, source, delay, total)   # move n-1 from helper to target(stack back)


def main():
    print(f"\n  {BOLD}{YELLOW}TOWER OF HANOI{RESET}\n")

    # ask for disk count
    while True:
        try:
            n= int(input(f"  {WHITE}Enter number of disks (1–20): {RESET}"))
            if 1 <= n <= 20:
                break
            print(f"  {RED}Please enter a number between 1 and 20{RESET}")
        except ValueError:
            print(f"  {RED}That is not a number. Try again{RESET}")

    # ask for speed
    print(f"\n  {GRAY}Speed: 1=slow  2=normal  3=fast{RESET}")
    while True:
        try:
            speed= int(input(f"  {WHITE}Choose speed (1–3): {RESET}"))
            if speed in (1, 2, 3):
                break
            print(f"  {RED}Enter 1, 2 or 3{RESET}")
        except ValueError:
            print(f"  {RED}Enter 1, 2 or 3{RESET}")

    delay = {1: 1.2, 2: 0.33, 3: 0.11}[speed]

    # setup
    global total_moves, current_move
    total_moves= 2 ** n - 1  # (2^n)-1
    current_move= 0
    pegs['A']= list(range(n, 0, -1))   # n=bottom(biggest), 1=top(smallest) ; {n,n-1,....,1}
    pegs['B']= []
    pegs['C']= []

    draw(n)
    time.sleep(0.8)

    # solve
    move(n, 'A', 'C', 'B', delay, n)

    print(f"{GREEN} Solved in {current_move} moves!  Recursion depth was {n}{RESET}\n")


if __name__ == "__main__":
    try:
        main()
    except KeyboardInterrupt:
        print(f"\n\n  {YELLOW}Interrupted. Goodbye!{RESET}\n")
