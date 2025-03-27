#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> nums, int st, int end){
    int mid, target = 5;;
    if(st<=end){
        mid = st + (end-st)/2;
        if(target>nums[mid]){
            return binarySearch(nums, mid+1, end);
        }
        else if(target<nums[mid]){
            return binarySearch(nums, st, mid-1);
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> nums={-1,0,3,5,9,12};
    int st=0;
    int end = nums.size()-1;
    int idx = binarySearch(nums, st,end);
    cout<<idx;
}