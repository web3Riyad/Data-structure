#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q1=0,q2=0,q3=0,q4=0;
    int n;
    cin>>n;
    vector<pair<long long int,long long int>>v;
    while(n--)
    {
        long long int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    for(pair<long long int,long long int> child:v)
    {
        int x=child.first;
        int y=child.second;
         if(x>0 && y>0)
            q1++;

        else if(x<0 && y>0)
            q2++;

        else if(x<0 && y<0)
            q3++;

        else
            q4++;
    }
    int p=min(q1,q3);
    int q=min(q2,q4);
    int ans=p+q;
    cout<<ans;

    return 0;
}

