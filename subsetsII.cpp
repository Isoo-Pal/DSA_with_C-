#include<iostream>
#include<vector>
using namespace std;

void getallSubsets(vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &allSubsets){
    if(i == nums.size()){
        allSubsets.push_back({ans});
        return;
    }

    //including
    ans.push_back(nums[i]);
    getallSubsets(nums, ans, i+1, allSubsets);

    //excluding
    ans.pop_back();
    int idx = i+1;
    while(idx < nums.size() && nums[idx] == nums[idx-1])idx++;
    getallSubsets(nums, ans, idx, allSubsets);
}

int main(){
    vector<int> nums = {1,2,2};
    vector<vector<int>> allSubsets;
    vector<int> ans;

    getallSubsets(nums, ans, 0, allSubsets);

    for(auto &i : allSubsets){
        for(auto &j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}