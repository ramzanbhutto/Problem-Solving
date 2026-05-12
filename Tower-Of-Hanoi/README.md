# Tower of Hanoi - Recursive Visualization

A colorful terminal-based visualization of the classic Tower of Hanoi puzzle solved using recursion.

## How Recursion Works Here

**The Logic:**
- To move 3 disks from A to C, we need to:
  1. Move the top 2 disks to B (using C as helper)
  2. Move the big disk directly from A to C
  3. Move those 2 disks from B to C (using A as helper)

So the function keeps calling itself with fewer disks until it hits the simplest case (1 disk), then builds back up.

**Code Structure:**
```python3
  def move(n, source, target, helper):
    # this is base case, when only one disk left then move it
    if n == 1:
        print(f"Move disk from {source} to {target}")
        return
    
    # do below process when disks>1
    move(n-1, source, helper, target)    # 1. Move small disks aside
    print(f"Move disk from {source} to {target}")  # 2. Move big disk
    move(n-1, helper, target, source)    # 3. Move small disks back
```

## How to Run

```bash
python3 hanoi.py
```

or

```bash
python hanoi.py
```

Then follow the prompts:
1. Enter number of disks (1-20)
2. Choose speed (1=slow, 2=normal, 3=fast)

Press `Ctrl+C` to exit anytime.

## Requirements

- python 3.x
- Terminal with ANSI color support
