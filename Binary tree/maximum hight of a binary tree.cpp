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
int maxheight(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=maxheight(root->left);
    int r=maxheight(root->right);
    return max(l,r)+1;
}
int main()
{
    node* root=inputtree();//10 20 60 30 50 70 80 -1 -1 -1 -1 -1 80 -1 -1 -1 -1
    int h=maxheight(root);    //output:  10 20 60 30 50 70 40 80;
    cout<<h;
    return 0;
}



