#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node* next;
    node* prev;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class mystack
{
public:
    node *head=NULL;
    node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        node * newnode=new node(val);
         sz++;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return ;
        }
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
    void pop()
    {
        node* deletenode=tail;
        tail=tail->prev;
        tail->next=NULL;
         if(tail==NULL)
            head=NULL;
        delete deletenode;
        sz--;
    }
    int top()
    {
        return tail->val;
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
    mystack st;
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
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
