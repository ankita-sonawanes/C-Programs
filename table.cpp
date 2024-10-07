#include<iostream>
using namespace std;
int main()
{
    int n, ans;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        ans=n*i;
        cout<<n<<"*"<<i<<"="<<ans<<endl;
    }
    return 0;

}