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
void print_recursively(node *temp)
{
        if(temp==NULL)
        {
            return ;
        }

        print_recursively(temp->next);
        cout<<temp->val<<" ";


}
void print(node *head)
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
    node * head=NULL;
    node* tail=NULL;
    while(1)
    {

        int val;
        cin>>val;
        if(val<0)break;
        add(head,val);

    }

    print(head);
    print_recursively(head);

    return 0;

}
