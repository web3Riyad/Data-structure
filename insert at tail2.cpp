#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node * next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void add_at_tail(node* &head,int val)
{
    node * newnode=new node(val);
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
void print(node* head)
{
    node* temp=head;
    cout<<"Your link list"<<" ";
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

int main()
{
    node * head=NULL;
    while(1)
    {
        int x;
        if(x<0)
        {
            break;
        }
        cout<<"enter value"<<endl;
        cin>>x;
        add_at_tail(head,x);
        print(head);
    }
    return 0;

}
