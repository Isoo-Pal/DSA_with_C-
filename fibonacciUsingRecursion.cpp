#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    if(n == 0 || n == 1){
        return true;
    }
    return arr[n-1] >= arr[n-2] && isSorted(arr,n-1);
}

int fibonacci(int n){

    if(n==0 || n==1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int res = fibonacci(6);
    int arr[] = {1,2,3,0,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Nth term is : "<<res<<endl;

    cout<<"Is sorted : "<<isSorted(arr, n);
}