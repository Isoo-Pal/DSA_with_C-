//Lexicographical permutation is the next largest permutation from pivot
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,6,5,4};
    int pivot = -1, n = nums.size();

    //Finding pivot
    for(int i=n-1; i>=0; i--){
        if(nums[i]<nums[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot == -1){
        //Simply reverse the array because only one edge case will enter here
        //that is 6,5,4,3,2,1  beacuse here is no pivot exist
        int i=0, j=n-1;
        while(i<j){
            reverse(nums.begin(), nums.end());
        }
    }

    //swapping right most element to pivot element
    for(int i=n-1;i>pivot;i--){
        if(nums[i]>nums[pivot]){
            swap(nums[i], nums[pivot]);
            break;
        }
    }

    //Reversing the elements
    int i=pivot+1, j=n-1;
    while(i<j){
        swap(nums[i++], nums[j--]);
    }

    cout<<"Next lexicographical permutation is : ";
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    
}