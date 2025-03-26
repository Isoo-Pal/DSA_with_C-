#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {3, 7, 1, 2, 8, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    sort(arr, arr+size);

    int ans = arr[0];
    
    for(int i=0; i<size; i++){
        int next = ans+1;
        if(arr[i+1] != next){
            cout<<"Missing number is = "<<next;
            break;
        }
        else{
            ans = arr[i]+1;
        }

    }
}