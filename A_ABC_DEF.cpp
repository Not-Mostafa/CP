#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lp(size) for (int i = 0; i < size; i++)



void solve()
{
    cout<<"Enter customer name: ";
    string k;cin>>k;
    cout<<endl;

    cout<<"Enter customer age: ";
    ll age;cin>>age;
    cout<<endl;
    int discount;
    if(age < 18) discount = 10;
    else if(age >= 18 && age <= 65) discount = 0;
    else discount = 15;
    if(discount > 0) cout<<"You are eligible for a "<<discount <<"% discount.";
    else cout<<"You are not eligible for any discount.";
    cout<<endl;
    cout<<endl;
    cout<<"How many items did the customer purchase? ";
    int n;cin>>n;
    int total = 0;
    lp(n)
    {
        cout<<endl;
        cout<<"Enter the price of item "<<i+1<<": ";
        int temp;cin>>temp;
        total+=temp;
        cout<<endl;
    }
    discount/=100;
    cout<<endl;
    cout<<fixed<<setprecision(2)<<"Total amount before discount: $"<<total<<endl;
    cout<<endl;
    cout<<fixed<<setprecision(2)<<"Total amount after discount: $"<<total*discount<<endl;

    

}
int main() {
    solve();
    return 0;
}
