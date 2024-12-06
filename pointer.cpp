#include<bits/stdc++.h>
using namespace std;
void fun(int* x)
{
    x=NULL;
    cout<<&x<<endl;//different location allocated x & p

}
int main()
{
    int n=10;
    int * p=&n;
    fun(p);
   cout<<"main address"<<"\t"<< p<<endl;
    return 0;
}
