#include<iostream>
#include<algorithm>
using namespace std;

string reverseWords(string str){
    int l = str.length();
    string res = "";

    reverse(str.begin(), str.end());

    for(int i=0; i<l; i++){
        string word = "";
        while(i<l && str[i] != ' '){
            word += str[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if(word.length() > 0){
            res += " "+word;
        }
    }
    return res.substr(1);
}

int main(){
    string s = "the sky is blue";

    string res = reverseWords(s);

    cout<<res;
}