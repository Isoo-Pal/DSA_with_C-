#include<iostream>
using namespace std;

int PowerOf2(int n){
    return n>0 && (n&(n-1)) == 0;
}

int main(){
    int a=4, b=7;
    int num;

    cout<<" a & b = "<<(a & b)<<endl;    
    cout<<" a | b = "<<(a | b)<<endl;    
    cout<<" a ^ b = "<<(a ^ b)<<endl;    
    cout<<"5 << 1 = "<<(5 << 1)<<endl;
    cout<<"5 >> 1 = "<<(5 >> 1)<<endl;


    //Either number is power of 2 or not without using loop.

    cout<<"Enter a number: ";
    cin>>num;

    if(PowerOf2(num)){
        cout<<num<<" is power of 2.";
    }
    else{
        cout<<num<<" is not power of 2.";
    }
}