#include<iostream>
#include<vector>
#include<bitset>
#include<cmath>
using namespace std;

//A little challenge for converting number to binary without using loop
void challenge(void){
    int num = 56;
    int nextPower = pow(2, ceil(log2(num)));
    int previousPower = pow(2, floor(log2(num)));

    int toAdd = nextPower - num;
    int toSubtract = num-previousPower;
    // cout<<"Next power"<<previousPower<<endl;
    cout<<"Binary of "<<num<<" is = "<<bitset<8>(num)<<endl;

    cout<<"Number of set bit = "<<__builtin_popcount(num)<<endl;

    if(toAdd<toSubtract){
        cout<<"Add "<<toAdd<<" to make it the next power of 2."<<endl;
    }
    else{
        cout<<"Subtract "<<toSubtract<<" to make it the previous power of 2."<<endl;
    }


}
//Leetcode solution
int main(){
    vector<int> vec = {1,4,5,5,1};
    int ans = 0;
    for(int i: vec){
        ans ^= i;
    }

    cout<<"Single number is = "<<ans<<endl;

    challenge();


}