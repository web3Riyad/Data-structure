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
        return ;
    }
    tail->next=newnode;
    tail=newnode;
}
void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void print_recursion(node* head,node* temp)
{
    if(temp==NULL)
        return;
    cout<<temp->val<<" ";
    print_recursion(head,temp->next);
}
void print_recursively(node* head,node* temp)
{
    if(temp==NULL)
        return;
    print_recursively(head,temp->next);
    cout<<temp->val<<" ";
}
void reverse_link_list(node* &head,node* cur)
{
    if(cur->next==NULL)
    {
        head=cur;
        return ;
    }
    reverse_link_list(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
}
int main()
{
    node *head=NULL;
    node* tail=NULL;
    while(1)
    {
        int val;
        cin>>val;
        if(val<0)
            break;
        add(head,tail,val);
    }

    reverse_link_list(head,head);
    print(head);
    return 0;
}
