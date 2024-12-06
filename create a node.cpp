#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node* next;

    /*node(int val, node* next)
    {
        this->val=val;
        this->next=next;
    }*/
};
int main()
{
    node a,b;
    a.val=20;
    b.val=34;
    a.next=&b;
    b.next=NULL;

    cout<<a.val<<endl;
    cout<<a.next->val<<endl;
    cout<<a.next<<endl;
    cout<<&b<<endl;
    return 0;
}
