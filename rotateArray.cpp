#include<iostream>
#include<vector>
using namespace std;

void getReverse(vector<int> &nums, int start, int end){
    while(start<end){
        swap(nums[start++], nums[end--]);
    }
    return;
}

void optimal(vector<int> &nums, int k){
    int n = nums.size();
    if(n<2)return;
    k = k%n;
    if(k == 0)return;
    //step-1 : Reverse whole array
    getReverse(nums,0,n-1);

    //step-2 : Reverse first k elements.
    getReverse(nums,0,k-1);

    //step-3 : Reverse the rest elements.
    getReverse(nums,k,n-1);
}


//TC = O(k*n)  which gives TLE in leetcode.
void bruteforce(vector<int> &nums, int k){
    int n = nums.size();
    if(n<2)return;
    k = k%n;
    if(k == 0)return;
    while(k--){
        int temp = nums[n-1];
        //Shifting all elements
        for(int i=n-1; i>0; i--){
            nums[i] = nums[i-1];
        }
        nums[0] = temp;
    }
    return;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int k=3;

    // bruteforce(nums,k);
    optimal(nums,k);

    cout<<"After : "<<endl;
    for(auto i : nums){
        cout<<i<<" ";
    }
}