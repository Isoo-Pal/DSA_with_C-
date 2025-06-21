#include<iostream>
#include<vector>
using namespace std;

//TC - O(n! * n)
//SC - O(n! * n)
void getPerms(vector<int> &nums, int idx, vector<vector<int>> &ans){
    if(idx == nums.size()){
        ans.push_back({nums});
        return;
    }
    for(int i=idx; i<nums.size(); i++){
        swap(nums[i], nums[idx]);
        getPerms(nums, idx+1, ans);
        swap(nums[i], nums[idx]);   //Backtracking step.
    }
}

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans;
    getPerms(nums, 0, ans);

    for(auto &i : ans){
        for(auto &j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}