#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> vec, int n, int m, int maxAllowedPages){
    int students = 1, pages = 0;
    for(int i=0; i<n; i++){
        if(vec[i] > maxAllowedPages){return -1;}
        if(pages+vec[i] <= maxAllowedPages){
            pages += vec[i];
        }
        else{
            students++;
            pages = vec[i];
        }
    }
    return students>m ? false : true;
}

int allocateBooks(vector<int> vec, int n, int m){
    if(m>n){return -1;}
    int sum =0;
    for(int i=0; i<n; i++){
        sum += vec[i];
    }
    int st = 0, end = sum;
    int ans = -1;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(isValid(vec, n, m, mid)){
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
    vector<int> vec = {15,17,20};
    int n=3, m=2;
    cout<<allocateBooks(vec, n,m);
}