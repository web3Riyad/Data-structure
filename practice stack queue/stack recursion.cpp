#include<bits/stdc++.h>
using namespace std;
void recursion(stack<int>&st)
{
    if(st.empty()) return;
    int k=st.top();
    st.pop();
    recursion(st);
    stack<int>temp;
    while(!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }
    temp.push(k);
    while(!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
}
int main()
{
    stack<int>st;
    while(1)
    {
        int x;
        cin>>x;
        if(x==-1) break;
        st.push(x);
    }
    stack<int>st2(st);
    while(!st2.empty())
    {
        cout<<st2.top()<<" ";
        st2.pop();
    }

    recursion(st);
    cout<<"\n";
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }


    return 0;
}
