#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    char str[] = "Greetings";
    int st = 0;
    int end = sizeof(str)/sizeof(str[0])-1;

    while(st<end){
        swap(str[st],str[end]);
        st++;
        end--;
    }
    for(char ch : str){
        cout<<ch;
    }

    cout<<endl;
    //For string
    string str2 = "Welcome";
    reverse(str2.begin(), str2.end());
    cout<<str2;
}