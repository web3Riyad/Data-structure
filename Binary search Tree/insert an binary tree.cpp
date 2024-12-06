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
node* inputtree()
{
    int val;
    cin>>val;
    node* root;
    if(val==-1) root=NULL;
    else root=new node(val);
    queue<node*> q;
    if(root) q.push(root);//if(root!=NULL)
    while(!q.empty())
    {
        //bar kore ano
        node* p=q.front();
        q.pop();

        //jabotiyo joto kaj ache
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

        //children golo ke push koro
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}
void levelorder(node* root)
{
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        //ber kore ana
        node* f=q.front();
        q.pop();

        //jabotiyo ja kaj ace ta akane korbo
        cout<<f->val<<" ";

        //tar children golo ke raka
        if(f->left!=NULL)
        {
            q.push(f->left);
        }
        if(f->right!=NULL)
        {
            q.push(f->right);
        }
    }
}
void insertnode(node* &root,int x)
{
    if(root==NULL)
    {
        root=new node(x);
        return;
    }
    if(x<root->val)
    {
        if(root->left==NULL)
            root->left=new node(x);
        else
            insertnode(root->left,x);
    }
    if(x>root->val)
    {
        if(root->right==NULL)
            root->right=new node(x);
        else
            insertnode(root->right,x);
    }
}

int main()
{
    node* root=inputtree();
    int n;
    cin>>n;
    insertnode(root,n);//20 10 30 -1 15 25 35 13 -1 -1 -1 -1 -1 -1 -1
    levelorder(root);

    return 0;
}

