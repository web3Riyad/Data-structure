#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    getline(cin,sentence);
    string s;
    stringstream ss(sentence);
    map<string,int>mp;
    while(ss>>s)
    {
       mp[s]++;
    }
    /*for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first <<" "<<it->second<<endl;
    }*/
    cout<<mp["am"]<<endl;
    cout<<mp["love"];
    return 0;
}
