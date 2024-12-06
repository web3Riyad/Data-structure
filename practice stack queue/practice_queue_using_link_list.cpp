#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int a[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        long long int mx=INT_MIN;
        int x=0;
        int y=0;
        long long int sum=0;
        for(int i=1;i<=n-1;i++)
        {
            for(int j=1;j<=n;j++)
            {
                sum=a[i]+a[j];
                if(sum>mx)
                {
                    x=i;
                    y=j;
                }
            }
        }
        cout<<x<<" "<<y;
        if(t>0)
            cout<<endl;
        mx=INT_MIN;

    }
    return 0;
}

