#include<bits/stdc++.h>
using namespace std;
class students
{
public:
    string name;
    int roll;
    int marks;
    students(string name, int roll, int marks)
    {
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};
class compare
{
public:
    bool operator()(students a,students b)//akane operator ke operator overloading bole
    {
        if(a.marks>b.marks) return true;
        else if(a.marks<b.marks) return false;
        else
        {
            if(a.roll>b.roll) return true;
            else return false;
        }
    }
};
int main()
{
    int n;
    cin>>n;
    getchar();
    priority_queue<students,vector<students>,compare>pq;
    for(int i=0; i<n; i++)
    {
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        students obj(name,roll,marks);//normal not dynamic
        pq.push(obj);
    }
    while(!pq.empty())
    {
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        pq.pop();
    }
    return 0;
}
