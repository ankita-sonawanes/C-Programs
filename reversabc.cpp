#include<iostream>
using namespace std;

int main() {
    int n = 4;        // Number of rows
    char ch = 'A';    // Starting character

    // Outer loop for rows
    for(int i = 0; i < n; i++) {
        // Inner loop for printing characters in reverse order
        for(int j = i+1; j >= 0; j--) {
            cout << (char)(ch + j);
        }
        cout << endl;
    }

    return 0;
}
