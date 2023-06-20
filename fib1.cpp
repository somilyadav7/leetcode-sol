#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n,vector<int> &dp)
    {
        if(n<=1)
            return dp[n]=n;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=fib(n-1,dp)+fib(n-2,dp);
    }
};

int main()
{
    Solution s;
    int n;
    cin >> n;
    vector<int> dp(n+1,-1);
    cout << s.fib(n,dp);
    return 0;
}
