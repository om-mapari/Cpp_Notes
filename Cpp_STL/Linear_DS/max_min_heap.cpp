#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    // insertion log(n)
    // deleation log(n)  can delete top() only

    // priority_queue< data_type, container > pq;
    priority_queue<int, vector<int>> pq; // max 
    pq.push(2);
    pq.push(1);
    pq.push(3);
    pq.push(3);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    // for min priority queue insert ===>   pq.push(-arr[i])

    priority_queue<int, vector<int>, greater<int>> pqm; // min
    pqm.push(2);
    pqm.push(1);
    pqm.push(3);

    // cout << pqm.top() << endl;
    // pqm.pop();
    // cout << pqm.top() << endl;
    cout<<"Size 0(1) : "<<pqm.size()<<endl;
    while(!pqm.empty()) {
        cout<<pqm.top()<<" ";
        pqm.pop();
    }

    return 0;
}