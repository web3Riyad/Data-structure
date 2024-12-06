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
void print(node* root,int val)
{
    if(root==NULL)
        return;
    queue<pair<node*,int> >q;
    if(root) q.push({root,0});
    int l;
    while(!q.empty())
    {
        pair<node*,int> p=q.front();
        node* s=p.first;
        l=p.second;
        q.pop();

        if(l==val)
        {
            cout<<s->val<<" ";
        }
        if(s->left!=NULL)
        q.push({s->left,l+1});
        if(s->right!=NULL)
        q.push({s->right,l+1});
    }
    if(val>l)
        cout<<"Invalid";
}
int main()
{
   node* root=inputtree();
   int n;
   cin>>n;
   print(root,n);
   return 0;
}
