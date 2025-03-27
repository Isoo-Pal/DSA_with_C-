#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> nums, int st, int e,int target){
    int mid;
    while(st<=e){
        mid = st + (e-st)/2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[mid] >= nums[st] ){
            if(target >= nums[st] && target <= nums[e]){
                e = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        else{
            if(target >= nums[mid] && target <= nums[e]){
                st = mid+1;
            }
            else{
                e = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {3,4,5,6,7,0,1,2};

    int n = nums.size();
    int st = 0;
    int e = n-1;
    int target = 6;

    int idx = binarySearch(nums, st, e, target);

    cout<<idx;
}