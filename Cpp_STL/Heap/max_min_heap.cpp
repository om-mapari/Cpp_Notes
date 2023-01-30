#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{

    priority_queue<int, vector<int>> pq; // max 
    pq.push(2);
    pq.push(1);
    pq.push(3);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    priority_queue<int, vector<int>, greater<int>> pqm; // min
    pqm.push(2);
    pqm.push(1);
    pqm.push(3);

    cout << pqm.top() << endl;
    pqm.pop();
    cout << pqm.top() << endl;
    return 0;
}