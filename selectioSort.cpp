#include<iostream>
#include<vector>
using namespace std; 

int main(){
    vector<int> vec = {4,1,5,2,3};
    int n = vec.size();
    
    for(int i=0;i<n-1;i++){
        int smallestIdx = i;
        for(int j=i+1; j<n; j++){
            if(vec[j] < vec[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(vec[smallestIdx], vec[i]);
    }
    for(int i=0; i<n; i++){
        cout<<vec[i]<<" ";
    }
}