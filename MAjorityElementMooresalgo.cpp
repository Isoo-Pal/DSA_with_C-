#include<iostream>
#include<vector>
using namespace std;

int mooresAlgo(vector<int> vec){
    int freq=0;
    int n = vec.size();
    int ans=0;
    for(int i=0; i<n; i++){
        if(freq==0){
            ans = vec[i];
        }
        if(ans == vec[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {3,3,4};
    int res = mooresAlgo(vec);
    cout<<res;
}