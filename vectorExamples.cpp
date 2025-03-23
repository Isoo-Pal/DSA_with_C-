#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;

    cout<<"Size = "<<vec.size()<<endl;

    vec.push_back(15);
    vec.push_back(25);
    vec.push_back(35);

    cout<<"After size = "<<vec.size()<<endl;
    cout<<"Capacity = "<<vec.capacity()<<endl;

    vec.pop_back();
    cout<<"After pop size = "<<vec.size()<<endl;
    cout<<"Front = "<<vec.front()<<endl;
    cout<<"Back = "<<vec.back()<<endl;
}