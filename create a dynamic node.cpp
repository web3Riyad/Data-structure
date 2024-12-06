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
int main()
{

    node * head = new node(10);
    node * a = new node(23);
    node* b=new node(45);
    node* c=new node(456);

    head->next=a;
    a->next=b;
    b->next=c;

    //type ------ 1
    /*cout<<head->val<<endl;
    cout<<head->next->val<<endl;
    cout<<head->next->next->val<<endl;
    cout<<head->next->next->next->val<<endl;*/

    //type -------2
    /*cout<<head->val<<endl;
    cout<<a->val<<endl;
    cout<<b->val<<endl;
    cout<<c->val<<endl;*/

    node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }

    return 0;
}
