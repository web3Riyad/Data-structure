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
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void print_tail(node* tail)
{
    node* temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}

int main()
{
    node* head=NULL;
    node* tail=NULL;
    while(1)
    {
        int p;
        cin>>p;
        if(p<0) break;
        add(head,tail,p);

    }
    for(node* i=head; i->next!=NULL; i=i->next)
    {
        for(node* j=i->next; j!=NULL; j=j->next)
        {
            if(i->val>j->val)
                swap(i->val,j->val);
        }
    }
    print(head);
    print_tail(tail);
    return 0;
}
