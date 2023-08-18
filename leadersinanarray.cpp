class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector <int> v;
        int maxi = INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>=maxi)
            {
                maxi = a[i];
                v.push_back(a[i]);
            }
            
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
