#include <bits/stdc++.h>
using namespace std;
#define FIO ios ::sync_with_stdio(false), cin.tie(nullptr), cout.tie(NULL)
#define ll long long
#define ld long double
#define all(container) (container).begin(), (container).end()
#define cl(x,y)  (x + y - 1) / y
#define lp(size) for (int i = 0; i < size; i++)
#define rlp(size) for (int i = size - 1; i >= 0; i--)
#define ai(thing) for(auto& i : thing) cin>>i;
#define au(thing) for(auto& i : thing)
typedef vector<int> vi;
typedef vector<ll> vll;
const int N = 1e5 + 5;
const int M = 1e9 + 7;
const ll OO = 0x3f3f3f3f3f3f3f3f;

void solve()
{ 
    ll n;cin>>n;
    vll v(n);
    ai(v) sort(all(v));
    ll ans = *max_element(all(v)) + *min_element(all(v));
    ll l = 0,r=n-1;
    ll ct= 0;
    while(r > l)
    {
        ll temp = v[r] + v[l];
        ll ct1 = 1,ct2 = 1;
        while(r > l && v[r] == v[r-1])ct1++,r--;
        while(r > l && v[l] == v[l+1])ct2++,l++;
        if(temp == ans) ct+= ct1*ct2,l++,r--;
        else if(temp > ans) r--;
        else l++;
    }
    cout<<ct;

}
int main() {
    FIO;
    int test_cases = 1;
    //cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}
