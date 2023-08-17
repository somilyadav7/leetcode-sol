class Solution
{
    public:
    //Function to find the nth catalan number.
    /*
    int solve(int n, vector<int> &dp)
    {
        const int mod = 1e9 + 7;
        //code here
        if(n<=1)
            return 1;
        if(dp[n]!=-1)
            return (dp[n]%mod);
        int ans=0;
        //every i node is the root node
        for(int i=1;i<=n;i++)
        {
            ans += solve(i-1,dp) * solve(n-i,dp);
        }
        return dp[n]=ans%mod;
        
    }
    */
    
    int findCatalan(int n) 
    {
        vector<long long > dp(n+1, 0);
        
        const int mod = 1e9 + 7;

        dp[0] = 1;
        dp[1] = 1;

        // i -> number of nodes
        for(int i=2; i<=n; i++){

            // j -> root node
            for(int j=1; j<=i; j++){
                dp[i] = ( dp[i] + ( dp[j-1] * dp[i-j] ) %mod ) %mod ;
            }
        }

        return dp[n];
    }
};
