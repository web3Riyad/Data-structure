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
vector<int>v;
void printleft(node* root)
{
    if(root==NULL)
        return ;
    printleft(root->left);
    if(root->left==NULL)
        printleft(root->right);
    v.push_back(root->val);
}
void printright(node* root)
{
    if(root==NULL)
        return ;
    v.push_back(root->val);
    printright(root->right);
    if(root->right==NULL)
        printright(root->left);

}
int main()
{
    v.clear();
    node* root=inputtree();
    if(root->left!=NULL) printleft(root->left);
    v.push_back(root->val);
    if(root->right!=NULL) printright(root->right);
    for(int c:v)
    {
        cout<<c<<" ";
    }
    return 0;
}

