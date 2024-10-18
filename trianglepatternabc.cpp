#include<iostream>
using namespace std;

int main() {
    int n = 4;
    char ch = 'A';
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << ch;
            ch++;  // Move to the next character in the sequence
        }
        cout << endl;
    }
    return 0;
}

//outpu
/*A
BC
DEF
GHIJ*/
