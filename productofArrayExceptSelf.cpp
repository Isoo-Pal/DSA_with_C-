#include<iostream>
#include<vector>
using namespace std;

//Using divide symbol
vector<int>BruteForce(vector<int> nums){
    int mul = 1;
    vector<int> ans;
    for(int i=0; i<nums.size(); i++){
        mul = mul*nums[i];
    }
    
    for(int i=0;i<nums.size(); i++){
        ans.push_back(mul/nums[i]);
    }
    
    return ans;
}

//without using divide symbol
vector<int>BruteForce2(vector<int> nums){
    int n = nums.size();
    vector<int> ans(n,1);
    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums.size(); j++){
            if(i != j){
                ans[i] *= nums[j];
            }
        }
    }
    return ans;
}

//Using prefix and suffix array ||| this will run in O(n) TC but it takes O(n) SC also. 
vector<int> optimal(vector<int> nums){
    int n = nums.size();
    vector<int> prefix(n,1);
    prefix[0] = 1;
    for(int i=1; i<nums.size(); i++){
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    vector<int> suffix(n,1) ;
    for(int i=n-2; i>=0; i--){
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    vector<int> ans(n,1);
    for(int i=0; i<ans.size(); i++){
        ans[i] = prefix[i] * suffix[i];
    }
    return ans;
}


//Optimal with reduced SC
vector<int> optimalWithReducedSC(vector<int> nums){
    int n = nums.size();
    vector<int> ans(n,1);
    for(int i=1; i<nums.size(); i++){
        ans[i] = ans[i-1] * nums[i-1];
    }

    int suffix = 1;
    for(int i=n-2; i>=0; i--){
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }
    return ans;
}

int main(){
    vector<int> nums = {1,2,3,4};
    //vector<int> ans = BruteForce(nums);
    // vector<int> ans = BruteForce2(nums);
    // vector<int> ans = optimal(nums);
    vector<int> ans = optimalWithReducedSC(nums);

    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}