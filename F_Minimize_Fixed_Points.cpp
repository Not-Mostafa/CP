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
    vll isprime(n+1,0); 
    vll primes;
    for(ll i = 2 ; i <= n ; i++){
        if(!isprime[i]) {
            primes.pb(i);
            for(ll j = i*2 ; j <= n ; j+=i){
                isprime[j] = 1;
            }
        }
    }
    vll ans(n+1,0);
    ans[1] = 1;
    reverse(all(primes));
    vll used(n+1,0);
    for(auto prime : primes){// O(1e2)
        vll cycle;
        cycle.pb(prime);
        for(ll i = prime*2 ; i <= n ; i+=prime){ // O(1e5)
            if(used[i] == 0){
                cycle.pb(i);
                used[i] = 1;
            } 
        }
        for(ll i=0; i < cycle.size(); i++) // O(1e5)
            ans[cycle[i]] = cycle[(i+1) % cycle.size()];
    }
    for(ll i=1; i <= n; i++){
        cout<<ans[i]<<" ";
    }
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
