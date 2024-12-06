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
void levelorder(node* root)
{
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node *k=q.front();
        q.pop();

        cout<<k->val<<" ";

        if(k->left!=NULL)
            q.push(k->left);
        if(k->right!=NULL)
            q.push(k->right);
    }
}
void preorder(node* root)
{
    if(root==NULL)
        return;

    cout<<root->val<<" ";

    preorder(root->left);
    preorder(root->right);

}
void postorder(node* root)
{
    if(root==NULL)
        return;

    postorder(root->left);
    postorder(root->right);

    cout<<root->val<<" ";
}
void inorder(node* root)
{
    if(root==NULL)
        return;

    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);

}
int main()
{
    node* root=input();
    cout<<"levelorder   :   ";
    levelorder(root);
    cout<<"\n";
    cout<<"preorder     :   ";
    preorder(root);
    cout<<"\n";
    cout<<"postorder    :   ";
    postorder(root);
    cout<<"\n";
    cout<<"Inorder      :   ";
    inorder(root);
    return 0;
}
