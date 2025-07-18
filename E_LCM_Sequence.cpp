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
const int N = 1e7 + 5;
const int M = 1e9 + 7;
const ll OO = 0x3f3f3f3f3f3f3f3f;

void solve() {
    ll l,r;cin>>l>>r;
    ll ans = 0;
    bool isPrime[1e14];
    for(ll i = 2 ; i <= N ; i++){
        if(isPrime[i]){
            if(i >= l && i <= r) ans++;
            for(ll j = i+i ; j <= N; j += i){
                isPrime[j] = false;
            }
            ll j = ((l+1)/i+1)*i; //need to know how rhis works
            while(j <= r){
                isPrime[j] = true;
                j
            }
        }
    }
    cout<<ans;
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