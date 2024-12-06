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
node * convertTree(int a[],int n,int l,int r)
{
    if(l>r) return NULL;
    int mid=(l+r)/2;
    node* root=new node(a[mid]);
    node* newleft=convertTree(a,n,l,mid-1);
    node* newright=convertTree(a,n,mid+1,r);
    root->left=newleft;
    root->right=newright;
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
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    node* root=convertTree(a,n,0,n-1);
    levelorder(root);
    return 0;
}
