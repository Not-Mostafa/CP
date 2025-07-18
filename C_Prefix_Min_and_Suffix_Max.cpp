//******************************************************
//*                3MK The GOAT                        *                            
//******************************************************
#include <bits/stdc++.h>
using namespace std;
#define FIO ios ::sync_with_stdio(false), cin.tie(nullptr), cout.tie(NULL)
#define ll long long
#define ld long double
#define all(container) (container).begin(), (container).end()
#define cl(x,y)  (x + y - 1) / y
#define lp(size) for (ll i = 0; i < size; i++)
#define rlp(size) for (ll i = size - 1; i >= 0; i--)
#define ai(thing) for(auto& i : thing) cin>>i;
#define au(thing) for(auto& i : thing)
#define pb push_back
typedef vector<int> vi;
typedef vector<ll> vll;
const int N = 1e5 + 5;
const int M = 1e9 + 7;
const ll OO = 0x3f3f3f3f3f3f3f3f;

void solve() {
    ll n;cin>>n;
    vll v(n);
    ai(v)
    vector<char> ans(n,'0'); 
    ll mn = OO;
    lp(n){
        mn = min(v[i] , mn);
        if(mn == v[i]) ans[i] = '1';
    }
    ll mx = 0;
    rlp(n){
        mx = max(v[i] , mx);
        if(mx == v[i]) ans[i] = '1';
    }
    ans[0] = '1';
    ans[n-1] = '1';
    for(auto i : ans) cout<<i;
    cout<<endl;
}
int main() {
    FIO;
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}
