#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int maxSumOfSubarray(vector<int>& nums) {
    //Deletion
    for(int i=0; i<nums.size(); i++){
        for(int j=nums.size()-1; j>i; j--){  //Iterate backward to avoid skipping the deleted element
            if(nums[j] == nums[i]){
                nums.erase(nums.begin()+j);
            }
        }
    }
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    //Sum of subarrays
    int maxSum = INT_MIN;
    for(int i=0; i<nums.size(); i++){
        int currSum = 0;
        for(int j=i; j<nums.size(); j++){
            currSum += nums[j];
            maxSum = max(maxSum, currSum);
        }
    }
    return maxSum;
}


int main(){
    vector<int> vec = {2,-10,6};
    //vector<int> vec = {1,2,3,4,5};

    int ans = maxSumOfSubarray(vec);
    cout<<ans;
}