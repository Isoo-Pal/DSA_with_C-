#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num = 3586;
    int sum = 0;

    cout<<"Digits are: "<<endl;
    while(num!=0){
        int digit = num%10;
        cout<<digit<<" ";
        sum += digit;
        num = num/10;
    }
    cout<<endl<<"Sum is: "<<sum<<endl;


    num = 3568;
    //Shortcut for counting the digits
    cout<<"Shortcut for counting digits: "<<endl;
    cout<< (int)(log10(num)+1)<<endl;
}