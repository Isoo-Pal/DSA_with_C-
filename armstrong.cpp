#include<iostream>
using namespace std;

int main(){
    int n = 153;
    int cube = 0;
    int copyN = n;

    while(n != 0){
        int dig = n%10;
        cube += (dig*dig*dig);
        n = n/10;
    }
    if(cube == copyN){
        cout<<"Armstrong.";
    }
    else{
        cout<<"Not armstrong.";
    }
}