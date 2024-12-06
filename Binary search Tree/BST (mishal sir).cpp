#include<bits/stdc++.h>

using namespace std;

struct Node{
    int val;
    Node *left, *right;
};

Node* Insert(Node *root, int val)
{
    Node *newnode = new Node();
    newnode -> val = val;
    newnode -> left = NULL;
    newnode -> right = NULL;

    Node *currnode;
    currnode = root;
    if(root == NULL)
    {
        root = newnode;
        return root;
    }
    while(1)
    {
        if(val > currnode -> val)
        {
            if(currnode -> right == NULL)
            {
                currnode -> right = newnode;
                break;
            }
            else
            {
                currnode = currnode -> right;
            }
        }
        else if(val < currnode -> val)
        {
            if(currnode -> left == NULL)
            {
                currnode -> left = newnode;
                break;
            }
            else
            {
                currnode = currnode -> left;
            }
        }
    }
    return root;
}

int Search(Node *root, int val)
{
    Node *currnode;
    currnode = root;
    if(root == NULL)
    {
        return 0;
    }
    while(1)
    {
        if(val > currnode -> val)
        {
            if(currnode -> right == NULL)
                return 0;
            else
                currnode = currnode -> right;
        }
        else if(val < currnode -> val)
        {
            if(currnode -> left == NULL)
                return 0;
            else
                currnode = currnode -> left;
        }
        else
            return 1;
    }
}

void Preorder(Node *root)
{
    if(root != NULL)
        cout<<root->val<<" ";
    if(root -> left != NULL)
        Preorder(root->left);
    if(root->right != NULL)
        Preorder(root->right);
    return;
}

void Inorder(Node *root)
{
    if(root -> left != NULL)
        Inorder(root->left);
    if(root != NULL)
        cout<<root->val<<" ";
    if(root->right != NULL)
        Inorder(root->right);
    return;
}

void Postorder(Node *root)
{
    if(root -> left != NULL)
        Postorder(root->left);
    if(root->right != NULL)
        Postorder(root->right);
    if(root != NULL)
        cout<<root->val<<" ";
    return;
}

//3 7 1 5 10 13 12 8 15 11 2 4

int main()
{
    Node *root = NULL;
    root = Insert(root,3);
    root = Insert(root,7);
    root = Insert(root,1);
    root = Insert(root,5);
    root = Insert(root,10);
    root = Insert(root,13);
    root = Insert(root,12);
    root = Insert(root,8);
    root = Insert(root,15);
    root = Insert(root,11);
    root = Insert(root,2);
    root = Insert(root,4);
    Preorder(root);
    cout<<endl;
    Inorder(root);
    cout<<endl;
    Postorder(root);
    int res;
    res = Search(root,15);
    if(res)
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;
    res = Search(root,16);
    if(res)
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;
}
