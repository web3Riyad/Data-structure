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
    node*k=head;
    node* copyhead=NULL;
    node* copytail=NULL;
    {
        while(k!=NULL)
        {
            add(copyhead,copytail,k->val);
            k=k->next;
        }
    }
    node*i=copyhead;
    node*j=copytail;

    while(i!=j && i->next!=j)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
    }
    swap(i->val,j->val);

    print(head);
    print(copyhead);

    node* temp1=head;
    node* temp2=copyhead;
    int flag=0;
    while(temp1!=NULL && temp2!=NULL)
    {
            if(temp1->val!=temp2->val)
        {
            flag=1;
            break;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }

    if(flag==0)
    {
        cout<<"palindrome"<<endl;
    }
    else cout<<"NOt palindrome"<<endl;

    return 0;
}

