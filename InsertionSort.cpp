#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {4,1,5,2,3};

    for(int i=1;i<vec.size(); i++){
        int curr = vec[i];
        int prev = i-1;
        while(prev >=0 && vec[prev] > curr){
            vec[prev+1] = vec[prev];
            prev--;
        }
        vec[prev+1] = curr;
    }

    //Descending order
    for(int i=1;i<vec.size(); i++){
        int curr = vec[i];
        int prev = i-1;
        while(prev >=0 && vec[prev] < curr){
            vec[prev+1] = vec[prev];
            prev--;
        }
        vec[prev+1] = curr;
    }

    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
}