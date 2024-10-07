#include<iostream>
using namespace std;
int main()
{
    int n,ans=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ans+=i;
    }
    cout<<ans<<endl;
    return 0;
}