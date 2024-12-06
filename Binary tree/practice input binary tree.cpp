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
        this->left=NULL;
        this->right=NULL;
    }
};
void levelorder(node* root)
{
    if(root==NULL) return;
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node* k=q.front();
        q.pop();
        cout<<k->val<<" ";
        if(k->left!=NULL)
        {
            q.push(k->left);
        }
        if(k->right!=NULL)
        {
            q.push(k->right);
        }
    }
}
node* inputree()
{
    int val;
    cin>>val;
    node* root;
    if(val==-1) root=NULL;
    else root=new node(val);
    queue<node*>q;
    if(root) q.push(root);
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
        {
            q.push(p->left);
        }
        if(p->right!=NULL)
        {
            q.push(p->right);
        }
    }
    return root;
}

int main()
{
    node* root=inputree();
    levelorder(root);
    return 0;

}
