#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        int climbStairs(int n,vector<int> &dp)
        {
            if(n<=1)
                return dp[n]=n;
            if(dp[n]!=-1)
                return dp[n];
            return dp[n]=climbStairs(n-1,dp)+climbStairs(n-2,dp);
    }
};

int main()
{
    Solution s;
    int n;
    cin >> n;
    vector<int> dp(n+1,-1);
    cout << s.climbStairs(n,dp);
    return 0;}
