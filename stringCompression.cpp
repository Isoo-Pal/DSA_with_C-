#include<iostream>
using namespace std;

string compression(string str, int n){
    string ans = "";
    for(int i=1; i<n; i++){
        int count = 1;
        while(i<n && str[i] == str[i-1]){
            count++;
            i++;
        }
        if(count > 1){
            ans += to_string(count)+str[i-1];
        }
        else{
            ans += str[i-1];
        }
    }
    return ans;
}

int main(){
    string str = "aabbcccc";
    int n = str.length();
    string res = compression(str,n);
    cout<<res;
}