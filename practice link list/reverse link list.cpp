#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node* next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void add(node* &head,node* &tail,int val)
{
    node* newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
void reverse(node* &head,node* cur)
{
    if(cur->next==NULL)
    {
        head=cur;
        return;
    }
    reverse(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
}
int main()
{
    node* head=NULL;
    node* tail=NULL;
    while(1)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        add(head,tail,val);
    }
    print(head);
    reverse(head,head);
    print(head);

    return 0;
}
