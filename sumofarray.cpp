#include<iostream>
using namespace std;

int main() {
    int n;
    std::cout <<"enter the size of array:";
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
        
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    std::cout<<"sum="<<sum;
    
    

    return 0;
}