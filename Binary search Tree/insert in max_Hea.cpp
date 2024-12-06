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
int main()
{
    vector<int>v={50,40,45,30,35,42,32,25,20,10};
    int x;
    cin>>x;
    v.push_back(x);
    int currentIndex=v.size()-1;
    while(currentIndex!=0)
    {
        int parentIndex=(currentIndex-1)/2;
        if(v[parentIndex]<v[currentIndex])
        {
            swap(v[parentIndex],v[currentIndex]);
            currentIndex=parentIndex;
        }
        else break;
    }
    for(int val:v)
    {
        cout<<val<<" ";
    }
    return 0;
}
