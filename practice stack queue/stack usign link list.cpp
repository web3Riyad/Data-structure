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
class mylist
{
public:
    node* head=NULL;
    node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        node* newnode=new node(val);
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
        sz--;
        node* deletenode=tail;
        tail=tail->prev;
        tail->next=NULL;
        if(tail==NULL)
        {
            head=NULL;
        }
        delete deletenode;
    }
    int top()
    {
        //return *(v.end()-1);
        return tail->val;
    }
    bool emptylist()
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
    mylist ml;
    while(1)
    {
        int n;
        cin>>n;
        if(n==-1) break;
        ml.push(n);
    }
    while(!ml.emptylist())
    {
        cout<<ml.top()<<" ";
        ml.pop();
    }
    return 0;

}

