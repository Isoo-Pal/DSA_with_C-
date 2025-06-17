#include<iostream>
using namespace std;

int sumOfN(int n){
    if(n == 1){
        return 1;
    }
    return n + sumOfN(n-1);
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
    
}

void printNum(int n){
    if(n==1){   //base case
        cout<<n<<endl;
        return;
    }
    cout<<n<<" ";
    printNum(n-1);
}

int main(){
    printNum(100);
    int fact = factorial(5);
    cout<<"Factorial : "<<fact<<endl;

    int sum = sumOfN(10);
    cout<<"Sum : "<<sum<<endl;
}