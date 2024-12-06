#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int > v={1,2,3,4,5,6,7,8,76,5,43,2,8};
    //v.erase(v.begin()+2,v.end()-1);
    //vector<int>::iterator it;
    auto it=find(v.begin(),v.end(),8);
    if(it==v.end())
        cout<<"found"<<endl;
    else
        cout<<"Not found"<<endl;
        //cout<<*it<<endl;
    for(int s:v)
    {
        cout<<s<<" ";
    }
    return 0;
}

