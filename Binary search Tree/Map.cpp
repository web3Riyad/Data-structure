#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    /*mp.insert({"riyad",45});
    mp.insert({"nazmul",56});
    mp.insert({"sabbir",54});*/
    mp["riyad"]=45;
    mp["nazmul"]=56;
    mp["sabbir"]=54;
    /*for(auto it=mp.begin(); it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    r*/
    cout<<mp["riyad"]<<endl;
    if(mp.count("riyad"))
    {
        cout<<"ace";
    }
    else cout<<"nei";
    return 0;
}
