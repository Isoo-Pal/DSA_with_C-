#include<iostream>
using namespace std;

int BinaryToDec(int n){
    int ans = 0, pow=1, rem;
    while(n>0){
        rem = n%10; 
        n =n/10;
        ans += (rem*pow);
        pow *= 2;
    }
    return ans;
}

int main(){
    int n = 110;
    int val = BinaryToDec(n);
    cout<<"Decimal number of "<<n<<" is = "<<val;
}