#include<iostream>
using namespace std;
void solve(double meal_cost,int tip_persent,int tax_persent)
{
    double tip =meal_cost + (tip_persent/100);
    double tax =meal_cost + (tax_persent/100);
    double totalCost=meal_cost + tip + tax;
    int rounded_total=totalCost + 0.5;
    cout<<rounded_total<< endl;
}
int main(){
    double meal_cost;
    int tip_persent;
    int tax_persent;

    cin>>meal_cost;
    cin>>tip_persent;
    cin>>tax_persent;

    solve( meal_cost, tip_persent, tax_persent);
    return 0;
}