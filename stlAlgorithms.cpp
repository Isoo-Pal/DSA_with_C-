#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//implementing our own comparator
bool comparator(pair<int,int>p1, pair<int,int> p2){
    if(p1.second < p2.second)return true;
    if(p1.second > p2.second) return false;
    if(p1.first < p2.first) return true;
    else return false;
}

int main(){
    vector<int> vec = {1,2,4,5,6};

    int n=15;
    long int n2=15;
    long long int n3 = 15;

    string s = "bca";

    // vector<pair<int, int>> vec = {{5,2},{3,2}, {2,4}};

    // sort(vec.begin(), vec.end());//by default it arrange elements in ascending order
    // sort(vec.begin(), vec.end(), greater<int>());//for descending order
    // sort(vec.begin(), vec.end(), comparator);//using our own functor

    // reverse(vec.begin(), vec.end());
    reverse(vec.begin()+1, vec.begin()+4);

    // for(auto p:vec){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }


    for(auto v:vec){
        cout<<v<<" ";
    }

    cout<<endl;
    next_permutation(s.begin(), s.end());
    cout<<s<<endl;
    prev_permutation(s.begin(),s.end());
    cout<<s<<endl;

    cout<<"Max Element = "<<*(max_element(vec.begin(), vec.end()))<<endl;
    cout<<"Min Element = "<<*(min_element(vec.begin(), vec.end()))<<endl;

    cout<<binary_search(vec.begin(),vec.end(),4)<<endl;

    cout<<__builtin_popcount(n)<<endl;
    cout<<__builtin_popcountl(n2)<<endl;
    cout<<__builtin_popcountll(n3)<<endl;

}