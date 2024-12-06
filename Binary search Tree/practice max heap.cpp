#include<bits/stdc++.h>
using namespace std;
void add(vector<int>& v,int x)
{
    v.push_back(x);
    int curent_index=v.size()-1;
    while(curent_index!=0)
    {
        int parent_index=(curent_index-1)/2;
        if(v[parent_index]<v[curent_index])
            swap(v[parent_index],v[curent_index]);
        else break;

        curent_index=parent_index;
    }
}
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        add(v,x);
    }
    for(auto p:v)
    {
        cout<<p<<" ";
    }
    return 0;
}
