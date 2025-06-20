#include<iostream>
#include<vector>
using namespace std;

void getallSubsets(vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &allsubsets){
    int n = nums.size();
    if(i == n){
        allsubsets.push_back({ans});
        return;
    }

    //include
    ans.push_back(nums[i]);
    getallSubsets(nums, ans, i+1, allsubsets);

    //exclude
    ans.pop_back();
    getallSubsets(nums, ans, i+1, allsubsets);

}

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> allsubsets;
    vector<int> ans;

    getallSubsets(nums, ans, 0, allsubsets);

    for(auto &i : allsubsets){
        for(auto &j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }


}