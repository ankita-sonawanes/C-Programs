#include<iostream>
using namespace std;
int main(){
int N;
cout<<"enter the N:"<<endl;
cin>>N;
if(N%2 !=0){
    cout<<"Weird"<<endl;

}else if(N>=2 and N<=5){
    cout<<"Not weird"<<endl;

}
if(N>=6 and N<=20){
    cout<<"Weird"<<endl;
}
if(N>20){
    cout<<"Not Weird"<<endl;
}
return 0;
}