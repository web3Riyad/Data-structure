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
void cycle(node* head)
{
    node* slow=head;
    node* fast=head->next;
    int flag=0;
    while(fast!=NULL && fast->next!=NULL)
    {
        if(fast==slow)
        {
            flag=1;
            break;
        }
        slow=slow->next;
        fast=fast->next->next;
    }
    if(flag==1) cout<<"YES";
    else cout<<"NOT DETECTED";
}
int main()
{
    node* head=NULL;
    node* tail=NULL;
    while(1)
    {
        int n;
        cin>>n;
        if(n==-1)
            break;
        add(head,tail,n);
    }
    //tail->next=head;
    cycle(head);
    return 0;
}
