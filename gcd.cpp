#include<iostream>
using namespace std;

int EuclidsAlgoUsingSubtraction(int n1, int n2){
    while(n1>0 && n2>0){
        if(n1>n2){
            n1 = n1-n2;
        }
        else{
            n2=n2-n1;
        }
        
    }
    if(n1==0) return n2;
    return n1;
}

int EuclidsAlgoUsingdivision(int n1, int n2){
    while(n1>0 && n2>0){
        if(n1>n2){
            n1 = n1%n2;
        }
        else{
            n2=n2%n1;
        }
    }
    if(n1==0) return n2;
    return n1;
}

int BruteForce(int n1, int n2){
    if(n1==0){return n2;}
    if(n2 == 0){return n1;}
    if(n1 == n2){return n1;}
    int hcf = 1;
    for(int i=1; i<=min(n1,n2); i++){
        if(n1%i == 0 && n2%i == 0){
            hcf = i;
        }
    }
    return hcf;
}

int gcdRec(int n1, int n2){
    if(n2 == 0)return n1;
    return gcdRec(n2, n1%n2);
}

int lcm(int n1, int n2){
    int gcd = gcdRec(n1,n2);
    return (n1*n2)/gcd;
}

int main(){
    int n1 = 20, n2 =28;

    // int res = BruteForce(n1,n2);
    // int res = EuclidsAlgoUsingSubtraction(n1,n2); 
    // int res = EuclidsAlgoUsingdivision(n1,n2); 
    int res = gcdRec(n1,n2);
    int l = lcm(n1,n2);
    cout<<res<<endl;
    cout<<l<<endl;
}