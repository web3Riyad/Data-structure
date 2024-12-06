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

//tail aa add korbo

void insert_at_tail(node* &head, int val)
{
    node * newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        return ;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    //temp akon last node
    temp->next=newnode;
}

//link list print korbo

void print_link_list(node* head)
{
    node *temp=head;
    cout<<"your link list"<<" ";
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}


int main()
{
    node* head=NULL;
    //cout<<"Option 1: Insert at Tail"<<endl;
    //cout<<"Option 2: Print link list"<<endl;
    //cout<<"Option 3: Break the link list"<<endl;
    while(1)
    {


        /*int option;
        cout<<"enter a Option"<<endl;
        cin>>option;*/

        //if(option==1)
        //{
        int v;
        cout<<"enter the value"<<endl;
        cin>>v;
        insert_at_tail(head,v);


        if(v<0)
        {
            break;
        }

        // }

        print_link_list(head);

    }

    return 0;
}
