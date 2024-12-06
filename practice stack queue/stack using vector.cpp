#include<bits/stdc++.h>
using namespace std;
class mystack
{
public:
    vector<int>v;
    int sz=0;
    void push(int val)
    {
        v.push_back(val);
        sz++;
    }
    void pop()
    {
        v.pop_back();
        sz--;
    }
    int top()
    {
        //return *(v.end()-1);
        return v.back();
    }
    bool emptystack()
    {
        if(sz==0) return true;
        else return false;
    }
    int siz()
    {
        return sz;
    }
};
int main()
{
    mystack st;
    while(1)
    {
        int n;
        cin>>n;
        if(n==-1) break;
        st.push(n);
    }
    while(!st.emptystack())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;

}
