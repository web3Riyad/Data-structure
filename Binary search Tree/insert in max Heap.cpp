#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>v;
   int n;
   cin>>n;
   for(int i=0;i<n; i++)
   {
       int x;
       cin>>x;
       v.push_back(x);
       int cur_index=v.size()-1;
       while(cur_index!=0)
       {
           int par_index=(cur_index-1)/2;
           if(v[par_index]<v[cur_index])
            swap(v[par_index],v[cur_index]);
           else break;
           cur_index=par_index;
       }
   }
   for(int c:v)
   {
       cout<<c<<" ";
   }
    return 0;
}
