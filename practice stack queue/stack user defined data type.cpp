#include<bits/stdc++.h>
using namespace std;
class stackfun
{
public:
    vector<int>v;
    int sz=0;
    void push(int x)
    {
        v.push_back(x);
        sz++;
    }
    void pop()
    {
        v.pop_back();
        sz--;
    }
    int top()
    {
        return v.back();
    }
    bool emptystack()
    {
        if(sz==0)
            return true;
        else
            return false;
    }
};
int main()
{
    stackfun st;
    while(1)
    {
        int x;
        cin>>x;
        if(x==-1)
            break;
        st.push(x);
    }
    while(!st.emptystack())
    {
        cout<<st.top();
        st.pop();
    }
    return 0;
}
