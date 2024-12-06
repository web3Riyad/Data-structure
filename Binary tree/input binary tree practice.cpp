#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node* left;
    node * right;
    node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
node* input_tree()
{
    int v;
    cin>>v;
    node* root;
    if(v==-1)
        root->val=NULL;
    else
        root->val=v;
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node* par=q.front();
        q.pop();

        int leftval,rightval;
        cin>>leftval>>rightval;
        if(leftval==-1)
            par->left=NULL;
        else
            par->left->val=leftval;
        if(rightval==-1)
            par->right=NULL;
        else
            par->right->val=rightval;

        if(leftval!=-1)
            q.push(par->left);
        if(rightval!=-1)
            q.push(par->right);
    }
}
int main()
{
    node* root=input_tree();
    return 0;

}
