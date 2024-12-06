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
void add_head(node *&head,node* &tail,int val)
{
    node* newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return ;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insert_at_position(node* head,int val,int pos)
{
    node* newnode=new node(val);
    node* temp=head;
    for(int i=1; i<pos; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
    //temp->next->next->prev=newnode;
    newnode->next->prev=newnode;



}
void add_tail(node* &head,node* &tail,int val)
{
    node *newnode=new node(val);
    if(tail==NULL)
    {
        head=newnode;
        tail=newnode;
        return ;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;

}
void print_head(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void delete_head(node* &head)
{
    node* delete_node=head;
    head=head->next;
    head->prev=NULL;
    delete delete_node;
}
void delete_any_position(node *head,int posi)
{
    node* temp=head;
    for(int i=1; i<posi; i++)
    {
        temp=temp->next;
    }
    node* deletenode=temp->next;
    temp->next=deletenode->next;
    deletenode->next->prev=temp;
    delete deletenode;
}
void delete_tail(node* &tail)
{
    node* delete_node=tail;
    tail=tail->prev;
    tail->next=NULL;
    delete delete_node;
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
        int v;
        cin>>v;
        if(v<0) break;
        add(head,tail,v);
    }

    int pos,val;
    cout<<"enter the position number & value"<<endl;
    cin>>pos>>val;


    int cont=countlist(head);

    if(pos==0)
    {
        add_head(head,tail,val);
    }
    else if(pos>0 && pos<cont-1)
    {
        insert_at_position(head,val,pos);
    }
    else if(pos==cont-1)
    {
        add_tail(head,tail,val);
    }
    else
        cout<<"Invalid index"<<endl;

         print_head(head);

        //Delete
    cout<<"enter the deleting position"<<endl;
    int posi;
    cin>>posi;
    if(head==NULL)
        cout<<"Invalid Operation"<<endl;
    else if(posi==0)
    {
        delete_head(head);
    }
    else if(posi>0 && posi<cont-1)
    {
        delete_any_position(head,posi);
    }
    else if(posi==cont-1)
    {
        delete_tail(tail);
    }
    else
        cout<<"Invalid Index"<<endl;


    print_head(head);
    print_tail(tail);
    return 0;

}
