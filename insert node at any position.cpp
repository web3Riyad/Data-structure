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
void add_at_tail(node* &head,int val)
{
    node* newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        return ;
    }
    node * temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void print(node * head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void insert_at_any_position(node* head,int pos,int val)
{
    node* newnode=new node(val);
    node* temp=head;
    for(int i=0; i<pos-1; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
int main()
{
    node* head=NULL;
    cout<<"Option 1: Insert value at tail"<<" "<<endl;
    cout<<"Option 2: Print the link list"<<" "<<endl;
    cout<<"Option 3: Insert value at any position"<<" "<<endl;
    cout<<"Option 4: Stop the link list"<<" "<<endl;
    while(1)
    {
        cout<<"enter the Option"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"enter a value"<<endl;
            int v;
            cin>>v;
            add_at_tail(head,v);

        }
        if(op==2)
        {
            print(head);
        }
        if(op==3)
        {
            cout<<"enter Position and value"<<endl;
            int pos;
            int val;
            cin>>pos>>val;
            insert_at_any_position(head,pos,val);
        }
        if(op==4)
        {
            break;
        }
    }
    return 0;

}
