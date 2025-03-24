#include<iostream>
#include<vector>
using namespace std;

//Brute force method
vector<int> pairSum(vector<int> vec, int target, int size){
    vector<int> ans;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(vec[i] + vec[j] == target){
                ans.push_back(vec[i]);
                ans.push_back(vec[j]);
            }
        }
    }
    return ans;

}

//Two pointer approach
vector<int> PairSumTwo(vector<int> vec, int target, int size){
    vector<int> ans;
    int i=0, j=size-1;
    while(i<j){
        if(vec[i]+vec[j] == target){
            ans.push_back(vec[i]);
            ans.push_back(vec[j]);
            return ans;
        }
        else if(vec[i]+vec[j] < target){
            i++;
        }
        else{
            j--;
        }
    }
}

int main(){
    vector<int> vec = { 2,7,11,15 };
    int size = vec.size();
    int target = 9;
    vector<int> ans;
    //ans = pairSum(vec, target, size);
    ans = PairSumTwo(vec, target, size);
    cout<<"Pair is: ";
    for(int i : ans){
        cout<<i<<" ";
    }
}