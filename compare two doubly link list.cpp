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
int countlist(node* head)
{
    node* temp=head;
    int cont=0;
    while(temp!=NULL)
    {
        cont++;
        temp=temp->next;
    }
    return cont;
}
int main()
{
    node* head1=NULL;
    node* tail1=NULL;
    while(1)
    {
        int p;
        cin>>p;
        if(p<0) break;
        add(head1,tail1,p);

    }
    node* head2=NULL;
    node* tail2=NULL;
    while(1)
    {
        int p;
        cin>>p;
        if(p<0) break;
        add(head2,tail2,p);

    }
    int cnt1=countlist(head1);
    int cnt2=countlist(head2);
    node* temp1=head1;
    node* temp2=head2;
    int flag=0;
    /*if(cnt1==cnt2)
    {
        node* j=temp2;
        for(node* i=temp1; i!=NULL; i=i->next)
        {
            if(i->val!=j->val)
            {
                flag=1;
                break;
            }
            j=j->next;

        }
    }*/
    while(temp1!=NULL && temp2!=NULL)
    {
        if(cnt1!=cnt2)
        {
            flag=1;
            break;
        }

        else if(temp1->val!=temp2->val)
        {
            flag=1;
            break;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }

    if(flag==0)
    {
        cout<<"Same"<<endl;
    }
    else cout<<"NOt same"<<endl;

    return 0;
}
