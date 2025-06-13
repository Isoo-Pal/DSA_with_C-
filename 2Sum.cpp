#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> SumUsingHashMap(vector<int>& nums, int target){
    //Using Unordered map

    unordered_map<int, int> m;
    vector<int> ans(2,-1);

    for(int i=0; i<nums.size(); i++){
        int first = nums[i];
        int second = target-first;
        if(m.find(second) != m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first] = i;
    }
    return ans;
}

int main(){
    vector<int> nums = {4,8,2,7,11,15};

    int target = 100;

    vector<int> ans = SumUsingHashMap(nums, target);

    for(auto i:ans){
        cout<<i<<" ";
    }
}