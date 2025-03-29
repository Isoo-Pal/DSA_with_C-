#include<iostream>
#include<vector>
using namespace std;

//Using linear search O(n)TC
int peakIndex(vector<int> vec){
    for(int i=0; i<vec.size(); i++){
        if(vec[i]>vec[i-1] && vec[i]>vec[i+1]){
            return i;
        }
    }
    return -1;
}

//Using Binary search
int BinarySearch(vector<int> vec){
    int st = 1, end = vec.size()-2;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(vec[mid-1]<vec[mid] && vec[mid]>vec[mid+1]){
            return mid;
        }else if(vec[mid-1]<vec[mid]){
            st=mid+1;
        }
        else{
            end = mid-1;
        }
    }
}

int main(){
    vector<int> vec = {1,2,1};
    // int idx = peakIndex(vec);
    int idx = BinarySearch(vec);
    cout<<idx;
}