#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter n:"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        if(i%3==0){
            sum +=i;
            
        }
    }
    cout<<"sum of all divisible by 3:"<<sum<<endl;

    

    return 0;
}