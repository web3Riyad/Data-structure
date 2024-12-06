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
void leafnode(node* root)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL)
    {
        v.push_back(root->val);
    }
    leafnode(root->left);
    leafnode(root->right);
}
int main()
{
   node* root=inputtree();
   leafnode(root);
   int l=v.size();
   int a[l];
   for(int i=0; i<l; i++)
   {
       a[i]=v[i];
   }
   sort(a,a+l,greater<int>());
   for(int i=0; i<l ; i++)
   {
       cout<<a[i]<<" ";
   }
   return 0;
}
