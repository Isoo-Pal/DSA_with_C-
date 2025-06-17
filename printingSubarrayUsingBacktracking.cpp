#include<iostream>
#include<vector>
using namespace std;

//TC = O(2^n * n)
void printSubsets(vector<int>& nums, vector<int>& ans, int i){
    if(i == nums.size()){
        for(auto val: ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(nums[i]);  //include
    printSubsets(nums, ans, i+1);

    ans.pop_back();    //exculde  (backtrack)
    printSubsets(nums, ans, i+1);


}

int main(){
    vector<int> nums = {1,2,3};
    vector<int> ans;

    printSubsets(nums, ans, 0);
}