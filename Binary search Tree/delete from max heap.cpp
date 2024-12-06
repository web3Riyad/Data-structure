#include<bits/stdc++.h>
using namespace std;
void add_maxheap(vector<int>&v, int val)
{
    int cur_idx=v.size()-1;
    while(cur_idx!=0)
    {
        int par_idx=(cur_idx-1)/2;
        if(v[par_idx]<v[cur_idx])
        {
            swap(v[par_idx],v[cur_idx]);
        }
        else
            break;
        cur_idx=par_idx;
    }
}
void delete_maxheap(vector<int>& v)
{
    int sz=v.size()-1;
    v[0]=v[sz];
    v.pop_back();
    int cur_idx=0;
    while(true)
    {
        int left=2*cur_idx+1;
        int right=2*cur_idx+2;
        int last=v.size()-1;
        if(left<=last && right<=last)
        {
            if(v[left]>=v[right] && v[left]>=v[cur_idx])
            {
                swap(v[left],v[cur_idx]);
                cur_idx=left;
            }
            else if(v[right]>=v[left] && v[right]>=v[cur_idx])
            {
                swap(v[right],v[cur_idx]);
                cur_idx=right;
            }
            else
                break;
        }
        else if(left<=last)
        {
            if(v[left]>=v[cur_idx])
            {
                swap(v[left],v[cur_idx]);
                cur_idx=left;
            }
            else
                break;
        }
        else if(right<=last)
        {
            if(v[right]>=v[cur_idx])
            {
                swap(v[right],v[cur_idx]);
                cur_idx=right;
            }
            else
                break;
        }
        else
        {
            break;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        add_maxheap(v,x) ;
    }
    for(int val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"entering the process of delete"<<endl;
    delete_maxheap(v);

    for(int val:v)
    {
        cout<<val<<" ";
    }
    return 0;
}
