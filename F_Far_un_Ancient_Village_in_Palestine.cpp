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
    ll k;cin>>k;
    vll v(n);
    ai(v)
    if(k == 1) {
        cout<<"YES"; return;
    }
    vector<vector<pair<ll,ll>>> factors(N);
    vll primes;
    vector<bool> isprime(N,true);
    for(int i = 2; i < N ; i++){
        if(isprime[i]){
            factors[i].pb({i,1});
            primes.pb(i);
            for(int j = i*2 ; j < N ; j+=i){
                isprime[j] = false;
                ll temp = 0,num = j;
                while(num%i == 0){
                    temp++;
                    num/=i;
                }
                factors[j].pb({i,temp});
            }
        }
    }
    map<ll,ll> ans;
    for(auto num:v){
        for(auto [factor,power] : factors[num]){
            ans[factor] += power;
        }
    }
    for(auto factor : primes){
        if(ans[factor] != 0 && ans[factor]%k != 0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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
