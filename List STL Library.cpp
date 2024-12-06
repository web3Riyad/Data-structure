#include<bits/stdc++.h>
using namespace std;
int main()
{
    //list<int>mylist;
    //cout<<mylist.size();
    //list<int>mylist1= {2,3,4,56,7,6};
    //cout<<mylist1.size()<<endl;
    int a[5]={5,5,3,6,2};
    list<int>mylist(a,a+5);

    cout<<mylist.size()<<endl;
    for(int p:mylist)
    {
        cout<<p<<" ";
    }

    return 0;

}
