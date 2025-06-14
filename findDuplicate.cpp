#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& nums){
    //using slow and fast pointer
    int slow = nums[0];
    int fast = nums[0];
    do{
        slow = nums[slow];     //+1
        fast = nums[nums[fast]];     //+2
    }while(slow != fast);
    slow = nums[0];
    while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}
int main(){
    vector<int> nums = {3,1,3,4,2};

    int res = findDuplicate(nums);

    cout<<"Duplicate number is: "<<res;
}