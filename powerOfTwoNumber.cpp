#include<iostream>
using namespace std;

bool PowerOf2(){
    int count = 1, ans = 2;
    int givenNum;
    cout<<"Enter the number: ";
    cin>>givenNum;
    if(ans == givenNum){
        return true;
    }
    else{
        while(ans < givenNum){
            ans = 2*count;
            if(ans == givenNum)
                return true;
            count = ans;
        }
    }
    return false;

}

int main(){
   cout<<"Is given number is a power of 2 : "<<(PowerOf2());
}