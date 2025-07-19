#include<iostream>
using namespace std;

void generateBinary(int n, string current, int lastDigit) {
    if(current.length() == n) {
        cout << current << endl;
        return;
    }

    // Try placing 0 — always allowed
    generateBinary(n, current + '0', 0);

    // Try placing 1 — only if last digit was 0
    if(lastDigit == 0) {
        generateBinary(n, current + '1', 1); 
    }
}

int main() {
    int n = 3;
    generateBinary(n, "", 0);
    return 0;
}
