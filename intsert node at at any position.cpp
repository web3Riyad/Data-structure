#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void add(node* &head,int val)
{

    node *newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;

}
void insertathead(node* &head,int val)
{
    node *newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        return ;
    }
    newnode->next=head;
    head=newnode;

}
void insert_tail_with_efficiency(node* &head,node* &tail,int val)
{
    node *newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void insertAtAnyPosition(node* head,int v,int pos)
{
    node* newnode=new node(v);
    pos--;
    node* temp=head;
    for(int i=1; i<pos; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void deletenode(node * head,int ps)
{
    ps--;
    node* temp=head;
    for(int i=1; i<ps; i++ )
    {
        temp=temp->next;
    }
    node* deletenode=temp->next;
    temp->next=temp->next->next;
    delete deletenode;
}
void deletehead(node * &head)
{
    node* deletenode=head;
    head=head->next;
    delete deletenode;
    return ;

}
int count_fuction(node* head)
{
    node* temp=head;
    int cunt=0;
    while(temp!=NULL)
    {

        temp=temp->next;
        cunt++;

    }
    return cunt;
}
void print(node *head)//
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main()
{
    node * head=NULL;
    node* tail=NULL;
    while(1)
    {

        int val;
        cin>>val;
        if(val<0)break;
        //add(head,val);
        insert_tail_with_efficiency(head,tail,val);

    }
    print(head);
    int v,pos,ps,val,va;
    cout<<endl<<"enter the value and position"<<"\t";
    cin>>v>>pos;
    insertAtAnyPosition(head,v,pos);
    print(head);
    cout<<endl;
    cout<<"enter head val"<<"\t";
    cin>>val;
    insertathead(head,val);
    print(head);
    cout<<endl;
    cout<<"enter delete node position"<<"\t";
    cin>>ps;
    deletenode(head,ps);
    print(head);
    cout<<endl;
    cout<<"delete the head node"<<endl;
    deletehead(head);
    print(head);

    return 0;
}
