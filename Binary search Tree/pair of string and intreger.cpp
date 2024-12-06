#include<bits/stdc++.h>
using namespace std;
bool compare(pair<string, int> &a,pair<string, int> &b)
{
    if (a.first != b.first)
        return a.first < b.first;
    else
        return a.second > b.second;
}
int main()
{
    int n;
    cin>>n;
    getchar();
    vector<pair<string,int> >v;
    for(int i=0; i<n; i++)
    {
        string name;
        int x;
        cin>>name>>x;
        v.push_back({name,x});
    }
    sort(v.begin(), v.end(),compare);
    for(pair<string,int> p:v)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}

