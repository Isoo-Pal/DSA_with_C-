#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    stack<int> s2;
    s2.swap(s);

    cout<<"Size s = "<<s.size()<<endl;
    cout<<"size s2 = "<<s2.size()<<endl;

    cout<<"top = "<<s.top()<<endl;

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\nSize = "<<s.size();
}