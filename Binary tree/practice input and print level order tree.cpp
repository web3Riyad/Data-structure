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
node* input_tree()
{
    int rootvalue;
    cin>>rootvalue;
    node* root;
    if(rootvalue==-1) root=NULL;
    else root=new node(rootvalue);

    queue<node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        node* p=q.front();
        q.pop();

        int l,r;
        node* newleft;
        node* newright;
        cin>>l>>r;
        if(l==-1) newleft=NULL;
        else newleft=new node(l);

        if(r==-1) newright=NULL;
        else newright=new node(r);

        p->left=newleft;
        p->right=newright;

        if(p->left!=NULL)
            q.push(p->left);
        if(p->right!=NULL)
            q.push(p->right);
    }
    return root;
}
void level_order(node* root)
{
    if(root==NULL)
        return ;
    queue<node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        node * p=q.front();
        q.pop();

        cout<<p->val<<" ";
        if(p->left!=NULL)
            q.push(p->left);
        if(p->right!=NULL)
            q.push(p->right);
    }
}
int main()
{
    node* root=input_tree();
    level_order(root);
    return 0;
}
