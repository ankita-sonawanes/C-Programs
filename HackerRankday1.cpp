#include<iostream>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    int x;
    double y;
    string p;
    cin>>x;
    cin>>y;
    cin.get();
    getline(cin,p);
    // Print the sum of both integer variables on a new line.
    cout<<x+i<<endl;
    cout<<fixed<<setpricision(1)<<y+d<<endl;
    cout<<s+p;
    
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}