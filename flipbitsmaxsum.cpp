#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
        int i,c=0,sum=0,maxi=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                a[i]=-1;
                ++c;
            }
            else
                a[i]=1;
        }

        for(i=0;i<n;i++)
        {
            sum += a[i];
            maxi = max(sum,maxi);

            if(sum<0)
                sum=0;
        }
        return maxi+c;
    }
};

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}
