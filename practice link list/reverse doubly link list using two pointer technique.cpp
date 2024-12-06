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
    newnode->prev=tail;
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
/*void reverselist(node* &head,node* cur)
{
    if(cur->next==NULL)
    {
        head=cur;
        return;
    }
    reverselist(head,cur->next);
    cur->next->prev=cur->prev;
    cur->next->next=cur;
    cur->next=NULL;
    cur->prev=NULL;
}*/
void reverselist(node* head,node* tail)
{
    while(head!=tail && head->next!=tail)
    {
        swap(head->val,tail->val);
        head=head->next;
        tail=tail->prev;
    }
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
    reverselist(head,tail);
    print(head);

    return 0;
}

