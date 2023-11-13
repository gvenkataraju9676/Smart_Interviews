/*Find of number of binary strings of length N, such that there are no adjacent 1s in that string.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line contains N - length of the binary string.

Constraints

1 <= T <= 100000
1 <= N <= 100000

Output Format

For each test case, print the number of binary strings of length N, separated by newline. Since the answer can be very large, print answer % 1e9+7.

Sample Input 0

5
3
11
7
5
500
Sample Output 0

5
233
34
13
73724597
Explanation 0

Test Case 1
You can construct the following binary strings of length 3 with no adjacent 1s:
000, 001, 010, 100, 101 
*/
#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int n=1e5;
long long int m=1e9+7;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   long long int dp[n+1];
    dp[0]=1;
    dp[1]=2;
    dp[2]=3;
    for(int i=3;i<=n;i++)
    {
        dp[i]=(dp[i-1]+dp[i-2])%m;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        cout<<dp[x]<<endl;
    }
}
