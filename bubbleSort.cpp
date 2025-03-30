#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec ={4,1,5,2,3};
    int n = vec.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(vec[j] > vec[j+1]){
                swap(vec[j], vec[j+1]);
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<vec[i]<<" ";
    }
}