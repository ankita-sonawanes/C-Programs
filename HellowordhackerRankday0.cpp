#include<iostream>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string input_string; 
    
    // Read a full line of input from stdin (cin) and save it to our variable, input_string.
    getline(cin, input_string); 
    
    // Print a string literal saying "Hello, World." to stdout using cout.
    cout<< "Hello, World." << endl;
    cout<<input_string<<endl; 
    

    return 0;


    
}