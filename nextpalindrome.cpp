class Solution
{
public:
	vector<int> generateNextPalindrome(int num[], int n) 
	{
	    // code here
	    int i, ind=n/2;
	    bool change=1;
	    for(i=0;i<ind;i++)
	    {
	        if(num[i]>num[n-i-1])
	            change=0;
	        if(num[i]<num[n-i-1])
	            change=1;
	        num[n-i-1]=num[i];
	    }
	    
	    vector<int> v(n);
	    for(i=0;i<n;i++)
	        v[i]=num[i];
	        
	   while(change && ind<n)
	   {
	       if(v[ind]==9)
	       {
	           v[ind]=0;
	       }
	       else{
	           ++v[ind];
	           change=0;
	       }
	       v[n-ind-1]=v[ind];
	       ++ind;
	   }
	   
	   if(change)
	   {
	       v[0]=1;
	       v.push_back(1);
	   }
	   
	   return v;
	}

};
