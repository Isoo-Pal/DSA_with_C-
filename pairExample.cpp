#include<iostream>
#include<vector>
using namespace std;

int main(){
    pair<int,int> p ={1,5};
    vector<pair<int, char>> vec = {{1,'a'}, {2, 'b'}, {3, 'c'}};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    vec.push_back({4,'d'});//insert as it is value
    vec.emplace_back(5,'e'); //in-place object create
    for(auto i:vec){
        cout<<i.first<<" ";
        cout<<i.second<<endl;
    }
}