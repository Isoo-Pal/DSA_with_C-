#include<iostream>
using namespace std;

int main(){
    int decNum = 6;
    int pow = 1, ans = 0, rem;
    while(decNum > 0){
        rem = decNum%2;

        decNum = decNum/2;

        ans += (rem*pow);
        pow = pow*10;

    }

    cout<<"Binary of 6 "<<"is = "<<ans;
}