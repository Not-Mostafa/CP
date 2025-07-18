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
    vll v(n),diff(n);
    ai(v)
    ll ans = 1;
    lp(n - 1) {
        if(v[i] < v[i+1]) diff[i] = 1;
        else if(v[i] > v[i+1]) diff[i] = -1;
        else diff[i] = 0;
    }
    ll temp = 1;
    for(int i = 1 ; i < n ; i++){
        if(diff[i-1] == diff[i] || diff[i] == 0 || diff[i] == -1) temp++;
        else temp = 1;
    
        ans = max(ans,temp);
    }
    reverse(all(diff))
    for(int i = 1 ; i < n ; i++){
        if(diff[i-1] == diff[i] || diff[i] == 0 || diff[i] == -1) temp++;
        else temp = 1;
    
        ans = max(ans,temp);
    }
    cout<<ans<<endl;
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
