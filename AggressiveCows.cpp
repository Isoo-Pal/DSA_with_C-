#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> vec, int n, int c, int minAllowedDist){
    int cow = 1, lastStallPos = vec[0];

    for(int i=1; i<n; i++){
        if(vec[i] - lastStallPos >= minAllowedDist){
            cow++;
            lastStallPos = vec[i];
        }
        if(cow == c){
            return true;
        }
    }
    return false;
}

int getDistance(vector<int> vec, int n, int c){
    sort(vec.begin(), vec.end());

    int st=1, end = vec[n-1]-vec[0],ans = -1;

    while(st <= end){
        int mid = st + (end-st)/2;
        if(isPossible(vec, n, c, mid)){
            ans = mid;
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {1,8,4,9,5,10};
    int n=5, c=3;

    cout<<getDistance(vec,n, c);
}