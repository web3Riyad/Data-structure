#include<bits/stdc++.h>
using namespace std;
void divide(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
         for(int i=l;i<=mid;i++)
        {
            cout<<a[i]<<" ";
        }
         cout<<endl;
        divide(a,l,mid);
        divide(a,mid+1,r);
    }
    else
        return ;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    divide(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
