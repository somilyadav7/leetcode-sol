#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n<=1)
    {
        cout << n;
        exit(0);
    }

    int prev1=1, prev2=0;
    for(int i=2;i<=n;i++)
    {
        int curi= prev1 + prev2;
        prev2 = prev1;
        prev1 = curi;
    }
    cout << prev1;
}
