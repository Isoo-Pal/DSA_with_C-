#include<iostream>
#include<queue>
using namespace std;

int main(){
    // priority_queue<int> q; //max heap

    priority_queue<int, vector<int>, greater<int>> q; //min heap, here greater<int> is a functor

    q.push(5);
    q.push(3);
    q.push(10);
    q.push(0);

    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
}