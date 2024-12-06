#include<bits/stdc++.h>
using namespace std;
vector<int>findpos(string str,string sub)
{
    int strlen=str.size();
    int sublen=sub.size();
    vector<int>v;
    for(int i=0; i<strlen; i++)
    {
        int matched=0;
        for(int j=0; j<sublen; j++)
        {
            if(str[i+j]==sub[j])
            {
                matched++;
            }
            else if(sub[j]=='*')
            {
                matched++;
                continue;
            }
            else
            {
                break;
            }
        }
        if(matched==sublen)
        {
            v.push_back(i);
            i=i+sublen-1;
        }
    }
    return v;
}
int main()
{
    string s,p;
    cin>>s>>p;
    vector<int>v=findpos(s,p);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}
