#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    vector<int> vec = {1,-2,3,4,5,-6};
    int size = vec.size();
    //for subarrays-Brute force method
    for(int st=0; st<size; st++){
        for(int j=st; j<size; j++){
            for(int i=st; i<=j; i++){
                cout<<vec[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

    int maxSum = INT_MIN;
    //for maximum sum of subarray
    for(int st=0; st<size; st++){
        int currSum = 0;
        for(int j=st; j<size; j++){
            currSum += vec[j];
            maxSum = max(currSum, maxSum);
            
        }
    }

    cout<<"MAximum sum subarray = "<<maxSum<<endl;

}