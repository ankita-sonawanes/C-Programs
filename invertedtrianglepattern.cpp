#include<iostream>
using namespace std;

int main(){
    int n = 4;   // Number of rows
    char ch = 'A';  // Starting character

    for(int i = 0; i < n; i++) {
        // Print leading spaces
        for(int space = 0; space < i; space++) {
            cout << " ";
        }

        // Print characters in decreasing order
        for(int j = 0; j < n - i; j++) {
            cout << ch;
        }

        ch++;  // Move to the next character
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
