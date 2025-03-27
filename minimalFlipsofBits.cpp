#include<iostream>
using namespace std;

int main(){
    int a=2;
    int b=6;
    int c=5;
    int flips = 0;
    // int bitA = ((a >> 0) & 1);
    // cout<<bitA;
    for (int i = 0; i < 32; i++) {  // Check each bit (0 to 31)
        int bitA = (a >> i) & 1;
        int bitB = (b >> i) & 1;
        int bitC = (c >> i) & 1;
        cout<<bitA;

        if ((bitA | bitB) != bitC) {
            if (bitC == 1) {
                flips += 1;  // Flip one of them to make OR = 1
            } else {
                flips += (bitA + bitB);  // If both are 1, flip both (2 flips)
            }
        }
    }
    cout<<"Total flips = "<<flips;

    // cout<<(a>>1)&1;

}