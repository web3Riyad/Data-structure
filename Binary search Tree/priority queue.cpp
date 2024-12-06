#include<bits/stdc++.h>
//age kono kiso sort korte lagto O(nlogn)
//ar n ta element sort korte lagto O(n*2logn)
//but priority queue diye sort kora jai O(logn)

//priority queue max heap ar moto kaj kore

using namespace std;
int main()
{
    priority_queue<int>pq;
    while(true)
    {
        int c;
        cin>>c;
        if(c==0)
        {
            int x;
            cin>>x;
            pq.push(x);//O(log(n))
        }
        else if(c==1)
        {
            pq.pop();//O(log(n))
        }
        else if(c==2)
        {
            cout<<pq.top()<<endl;//O(1)
        }
        else break;
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
