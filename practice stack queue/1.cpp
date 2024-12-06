#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<long long int>v1;
        vector<long long int>v2;
    while(t--)
    {
       long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v1.push_back(x);
        }
      v2=v1;
      sort(v2.begin(),v2.end(),greater<long long int>());
     long long int minval=v2[1];
     long long int maxval=v2[0];
     int p,q;
     int flag1=0;
     int flag2=0;
     for(int i=0;i<n;i++)
     {
         if(flag1==0 &&  v1[i]==minval)
         {
             p=i+1;
            flag1=1;
         }
         if(flag2==0 &&  v1[i]==maxval)
         {
             q=i+1;
             flag2=1;
         }
     }
    if(p>q)
        swap(p,q);
    cout<<p<<" "<<q;
        if(t>0)
            cout<<"\n";


    }
    return 0;
}

