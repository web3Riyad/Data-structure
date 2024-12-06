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
        else newleft=new node(x);
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
int main()
{
    node* root=input_tree();
    print(root);
    return 0;
}
