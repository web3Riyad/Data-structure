#include<bits/stdc++.h>
using namespace std;
class  node
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
node * input_tree()
{
    int v;
    cin>>v;
    node* root;
    if(v==-1)
        root=NULL;
    else
        root=new node(v);

    queue<node*>q;
    if(root)
        q.push(root);
    while(!q.empty())
    {
        node* par=q.front();
        q.pop();
        int x,y;
        cin>>x>>y;
        node* newleft;
        node* newright;

        if(x==-1)
            newleft=NULL;
        else
            newleft=new node(x);
        if(y==-1)
            newright=NULL;
        else
            newright=new node(y);

        par->left=newleft;
        par->right=newright;

        if(par->left)
            q.push(par->left);
        if(par->right)
            q.push(par->right);
    }
    return root;
}
void print(node* root)
{
    queue<node*>q;
    if(root==NULL)
        cout<<"the tree is empty";
    else
        q.push(root);
    while(!q.empty())
    {
        node* par=q.front();
        q.pop();
        cout<<par->val<<" ";

        if(par->left!=NULL)
            q.push(par->left);
        if(par->right!=NULL)
            q.push(par->right);
    }
}
void insert_element(node* &root,int x)
{
    if(root==NULL)
    {
        root=new node(x);
    }
    if(root->val<x)
    {
        if(root->left==NULL)
        {
            root->left=new node(x);
        }
        else
        {
            insert_element(root->left,x);
        }
    }
    if(root->val>x)
    {
        if(root->right==NULL)
        {
            root->right=new node(x);
        }
        else
        {
            insert_element(root->right,x);
        }
    }
}
int main()
{
    node* root=input_tree();
    print(root);
    cout<<endl;
    cout<<"Please enter a number you want to insert"<<endl;
    int x;
    cin>>x;
    insert_element(root,x);
    print(root);
    return 0;
}

