#include<iostream>
using namespace std;

int main()
{
    int n=3;
    double x=2.10000;
    if(n == 0) return 1.0;
    if(x == 0) return 0.0;
    if(x == 1) return 1.0;
    if(x == -1 && n%2 == 0) return 1.0;
    if(x == -1 && n%2 != 0) return -1.0;

    long binForm = n;
    double ans = 1;

    //for negative powers
    if(binForm < 0){
        x = 1/x;
        binForm = -binForm;
    }

    while(binForm > 0){
        if(binForm % 2 == 1){
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    cout<<ans;
}