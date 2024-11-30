#include<iostream>
using namespace std;
int bintodecimal(int binnum){
    int ans=0,pow=1;
    while(binnum>0){
        int rem=binnum%2;
        
        ans +=(rem * pow);
        binnum /=10;
        pow*=2;
    }
    return ans;

}
int main(){
    int binnum=1010;
    for(int i=1;i<=10;i++){
        cout<<bintodecimal(i)<<endl;
    }
    return 0;
}