#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> allsubsets;
    vector<int> ans;

    vector<vector<int>> res = getallSubsets(nums, ans, 0, allsubsets);


}