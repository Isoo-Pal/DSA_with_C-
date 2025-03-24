#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    vector<int> vec = {-2,1,-3,4,-1,2,1,-5,4};

    int currSum=0, maxSum = INT_MIN;

    for(int st : vec){
        currSum += st;
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout<<"Maximum sum of subarray is = "<<maxSum;
}