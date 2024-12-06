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
        this->right=right;
    }
};
node* input_tree()
{
    int val;
    cin>>val;
    node* root;
    if(val==-1) root=NULL;
    else root=new node(val);
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
        if(p->right!=NULL)
            q.push(p->right);

    }
    return root;
}
vector<int>v;
void leftViewOfBinaryTree(node* root)
{
    bool a[10000]={false};
    queue<pair<node*,int> >q;
    q.push({root,1});
    while(!q.empty())
    {
        pair<node*,int> p=q.front();
        node* k=p.first;
        int level=p.second;
        q.pop();

        if(a[level]==false)
        {
            v.push_back(k->val);
            a[level]=true;
        }
        if(k->left!=NULL)  q.push({k->left,level+1});
        if(k->right!=NULL) q.push({k->right,level+1});
    }
}
int main()
{
    node* root=input_tree();
    leftViewOfBinaryTree(root);
    for(int c:v)
    {
        cout<<c<<" ";
    }
    return 0;

}
