#include<iostream>
using namespace std;

int main(){
    //Char Array
    char str[100]= "Hello";

    // cout<<"Enter char array: ";
    // cin.getline(str, 12);
    // cin.getline(str, 12, '$');   //cin.getline(string,size, delim?)

    cout<<str<<endl;
    for(int i=0; str[i] != '\0'; i++){
        cout<<str[i]<<" ";
    }

    cout<<endl<<"String: "<<endl;
    //Using String class
    string str2 = "Greetings";  //dynamic
    string str3 = "World";
    cout<<str2<<endl;
    cout<<(str2+str3)<<endl;
    cout<<(str2 == str3)<<endl;
    cout<<(str2>str3)<<endl;
    cout<<(str2<str3)<<endl;
    cout<<"Enter the string: "<<endl;
    // cin>>str2;
    getline(cin, str2);
    cout<<str2<<endl;
}