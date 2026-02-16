/*
* Author: Muhammad Ramzan
* Date: 7th October 2026
* Problem: Codeforces - Sum of Squares : https://codeforces.com/gym/106104/problem/A 
* Description: Given a number fn, find the largest integer n such that the sum of squares of first n natural numbers is less than or equal to fn. The sum of squares of first n natural numbers is given by the formula n(n+1)(2n+1)/6.
* Solution: The sum of squares of first n natural numbers is given by the formula n(n+1)(2n+1)/6. We need to find the largest integer n such that n(n+1)(2n+1)/6 <= fn. This can be rearranged to form a cubic equation 2n^3 + 3n^2 + n - 6fn <= 0. We can solve this cubic equation using Cardano's method to find the largest integer n that satisfies the condition.
*
* Implementation: Solved by finding the roots of the cubic equation using Cardano's method as 2n^3 + 3n^2 + n - 6fn = 0
*
* Time Complexity: O(1) per test case
* Space Complexity: O(1)
*
*/


#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define endl '\n'

void solve(){
  long double fn;
  cin>>fn;

  long double innner= (9*fn*fn)/4.0  - 1.0/1728.0;
  long double sqrt_inner = sqrt(innner);

  long double a= cbrt((3*fn)/2.0 + sqrt_inner);
  long double b= cbrt((3*fn)/2.0 - sqrt_inner);

  long double num = a + b - 0.5;
  
  cout<<fixed<<setprecision(0)<<num<<endl;
}

int main(){
    fastio
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}

