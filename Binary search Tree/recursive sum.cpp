#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int a[N];
int b[N*3];
int sumArray(int left,int right)
{
    if(left==right)
        return a[left];
    int mid=(left+right)/2;
    int leftsum=sumArray(left,mid);
    int  rightsum=sumArray(mid+1,right);
    return leftsum+rightsum;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=sumArray(0,n-1);
    cout<<sum;
    return 0;
}
