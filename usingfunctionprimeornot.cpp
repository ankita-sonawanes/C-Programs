// #include<iostream>
// using namespace std;
// int prime(int n){
//     bool isprime=true;
    
//     for(int i=2;i<=(n-1);i++){
//         if(n%i==0){
//             isprime=false;
//             break;
//         }
//     }
//     if(isprime==true){
//             cout<<"prime number:"<<n<<endl;
//     }else{
//             cout<<"non prime number:"<<n<<endl;
//         }
// }
   

// int main(){
//     prime(11);
//     return 0;
// }
// prime number:11



//print all prime number

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i <= (n - 1); i++) {
        if (n % i == 0) {
            return false; // If divisible by any number other than 1 and n, it's not prime
        }
    }
    return true; // If no divisors are found, it's prime
}

void printPrimesUpTo(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " is a prime number." << endl;
        }
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    printPrimesUpTo(number); // Print all primes up to the input number
    
    return 0;
}
// Enter a number: 11
// 2 is a prime number.
// 3 is a prime number.
// 5 is a prime number.
// 7 is a prime number.
// 11 is a prime number.
    