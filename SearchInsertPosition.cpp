#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int> &nums, int target){
    int st=0, end=nums.size()-1, mid;
    if(nums[end] < target)return end+1;
    while(st<=end){
        mid = st + (end-st)/2;
        if(nums[mid] == target){return mid;}
        else if(nums[mid] > target){end = mid-1;}
        else{st = mid+1;}
    }
    st=0, end=nums.size()-1;
    while(st<=end){
        mid = st + (end-st)/2;
        if(nums[mid] < target && nums[mid+1] > target){return mid+1;}
        else if(nums[mid] > target){end = mid-1;}
        else{st = mid+1;}
    }
    return mid;
}

int main(){
    vector<int> nums = {1,3,5,6};
    int target = 5;

    int idx = searchInsert(nums,target);
    cout<<idx<<endl;
}