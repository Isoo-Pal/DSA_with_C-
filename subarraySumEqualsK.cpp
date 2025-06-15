#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


int bruteForce(vector<int>& nums, int k){
    int count = 0;
    int n = nums.size();
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += nums[j];
            if(sum == k){
                count++;
            }
        }
    }
    return count;
}

//Optimal approach using Hashing with prefix sum technique
//TC = O(n)
//SC = O(n)
int subarraySum(vector<int>& nums, int k){
    int count = 0;
    int n = nums.size();
    vector<int> prefixSum(n,0);
    prefixSum[0] = nums[0];

    for(int i=1; i<n; i++){
        prefixSum[i] = prefixSum[i-1] + nums[i];
    }

    unordered_map<int, int> m; //PS, Freq
    for(int j=0; j<n; j++){
        if(prefixSum[j] == k){count++;}

        int val = prefixSum[j] - k;
        if(m.find(val) != m.end()){
            count += m[val];
        }

        if(m.find(prefixSum[j]) == m.end()){
            m[prefixSum[j]] = 0;
        }
        m[prefixSum[j]]++;
    }
    return count;
}

int main(){
    vector<int> nums = {9,4,20,3,10,5};
    int target = 33;

    // int res = bruteForce(nums,target);
    int res = subarraySum(nums,target);

    cout<<res<<endl;
}