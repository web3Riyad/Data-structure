#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int mark;
    int roll;
    student(string name,int roll,int mark)
    {
        this->name=name;
        this->roll=roll;
        this->mark=mark;
    }
};
class cmp
{
public:
    bool operator()(student a,student b)
    {
        if(a.mark!=b.mark)
            return a.mark>b.mark;
        else return a.roll<b.roll;
    }
};
int main()
{
    int n;
    cin>>n;
    priority_queue<student,vector<student>,cmp>pq;
    while(n--)
    {
        string name;
        int roll,mark;
        cin>>name>>roll>>mark;
        student obj(name,roll,mark);
        pq.push(obj);

    }
    int q;
    cin>>q;
    while(q--)
    {
        int p;
        cin>>p;
        if(p==0)
        {
            string name;
            int roll,mark;
            cin>>name>>roll>>mark;
            student obj(name,roll,mark);
            pq.push(obj);
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark<<endl;
            pq.pop();
        }
        else if(p==1)
        {
            if(!pq.empty())
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark<<endl;
                pq.pop();
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
        else if(p==2)
        {
            pq.pop();
            if(!pq.empty())
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark<<endl;
                pq.pop();
            }
            else
            {
                cout<<"Empty"<<endl;
            }

        }
    }

    return 0;
}
