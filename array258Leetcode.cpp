#include<iostream>
using namespace std;
int addDigits(int num) {
        while(num>=10){
            int sum=0;
            while(num>0){
                sum=sum+num%10;
                num=num/10;
                
            }
            num=sum;
        }
        return num;
}
int main()
{
    int num;
    cout<<"enter no:"<<endl;
    cin>>num;
    int ans=addDigits(num);
    cout<<"ans is"<<ans<<endl;
    return 0;
}

        
        