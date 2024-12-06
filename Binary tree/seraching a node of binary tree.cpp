#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node* left;
    node* right;
    node(int val)
    {
        this->val=val;
        this->left=left;
        this->right=right;
    }
};
node* input()
{
    int n;
    cin>>n;
    node* root;
    if(n==-1)  root=NULL;
    else root=new node(n);

    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node* p=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        node* newleft;
        node* newright;
        if(l==-1) newleft=NULL;
        else newleft=new node(l);
        if(r==-1) newright=NULL;
        else newright=new node(r);
        p->left=newleft;
        p->right=newright;

        if(p->left!=NULL)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}
void searchnode(node* root,int n)
{
    if(root==NULL)
    {
        cout<<"NULL tree";
        return ;
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node* s=q.front();
        q.pop();
        if(s->val==n)
        {
            cout<<"find";
            return ;
        }
        if(s->left!=NULL)
            q.push(s->left);
        if(s->right!=NULL)
            q.push(s->right);
    }
    cout<<"no match";
}
int main()
{
    node* root=input();
    int n;
    cin>>n;
    searchnode(root,n);
    return 0;
}
