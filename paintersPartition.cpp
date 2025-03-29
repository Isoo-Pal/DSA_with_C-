#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> vec, int n, int m, int maxAllowedTime){
    int painters = 1, time = 0;
    for(int i=0; i<n; i++){
        if(vec[i] > maxAllowedTime){return -1;}
        if(time+vec[i] <= maxAllowedTime){
            time += vec[i];
        }
        else{
            painters++;
            time = vec[i];
        }
    }
    return painters>m ? false : true;
}

int minTimetoPaint(vector<int> vec, int n, int m){
    if(m>n){return -1;}
    int sum =0;
    for(int i=0; i<n; i++){
        sum += vec[i];
    }
    auto maxVal = max_element(vec.begin(), vec.end()); 
    int st = *maxVal;
    int end = sum;
    int ans = -1;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(isPossible(vec, n, m, mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {23,56,24,29 };
    int n=4, m=2;
    cout<<minTimetoPaint(vec, n,m);
}