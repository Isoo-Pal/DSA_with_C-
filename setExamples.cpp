#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    // set<int> s;
    // multiset<int> s;//for stioring multiple values

    unordered_set<int> s;//stores data in unordered manner, lower and upper bound cannot work in this

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(6);

    s.insert(1);
    s.insert(2);
    s.insert(3);

    // cout<<"lower bound "<<*(s.lower_bound(3))<<endl;//should not be less than given key
    // cout<<"upper bound "<<*(s.upper_bound(3))<<endl;//greater than given key

    for(auto val:s){
        cout<<val<<" ";
    }
}