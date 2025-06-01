#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string str = "madama";
    string str2 = str;

    reverse(str.begin(), str.end());
    if(str2 == str){
        cout<<"Given string is a valid palindrome";
    }
    else{
        cout<<"Given string is not a valid palindrome";
    }
}