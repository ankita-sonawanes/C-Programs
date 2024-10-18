#include<iostream>
using namespace std;

int main() {
    int n = 4;
    
    for(int i = 0; i < n; i++) {
        char ch = 'A' + i;  // Start from 'A' and move to the next character
        for(int j = 0; j < i + 1; j++) {
            cout << ch;  // Print the same character multiple times
        }
        cout << endl;
    }
    return 0;
}

//output
/*A
BB
CCC
DDDD*/
