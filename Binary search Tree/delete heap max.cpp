#include<bits/stdc++.h>
using namespace std;
void deleteheap(vector<int>&v)
{
    v[0]=v[v.size()-1];
    v.pop_back();
    int curindex=0;
    while(true)
    {
        int left_index=curindex*2+1;
        int right_index=curindex*2+2;
        int last_index=v.size()-1;
        if(left_index<=last_index && right_index<=last_index)
        {
            //duitai ace
            if(v[left_index]>v[right_index] && v[left_index]>v[curindex])
            {
                swap(v[left_index],v[curindex]);
                curindex=left_index;
            }
            else if(v[right_index]>v[left_index] && v[right_index]>v[curindex])
            {
                swap(v[right_index],v[curindex]);
                curindex=right_index;
            }
            else break;
        }
        else if(left_index<=last_index)
        {
            //left ace
            if(v[left_index]>v[curindex])
            {
                swap(v[left_index],v[curindex]);
                curindex=left_index;
            }
            else break;
        }
         else if(right_index<=last_index)
        {
            //right ace
            if(v[right_index]>v[curindex])
            {
                swap(v[right_index],v[curindex]);
                curindex=right_index;
            }
            else break;
        }
        else
        {
            break;
        }

    }
}
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
   deleteheap(v);
   for(int c:v)
   {
       cout<<c<<" ";
   }
    return 0;
}

