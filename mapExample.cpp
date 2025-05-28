#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    // map<string,int> m;

    // multimap<string,int> m;.//square brackets are not allowed here

    unordered_map<string,int> m;
    m["tv"] = 20;
    m["headphones"] = 20;
    m["laptop"] = 60;
    m["fridge"] = 200;
    m["cooler"] = 40;
    m["tablet"] = 30;

    // m.insert({"watch",50});
    // m.insert({"watch",50});
    // m.insert({"watch",50});
    // m.insert({"watch",50});

    m.erase("tv");

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    if(m.find("camera")!= m.end()){
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
}