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
    ai(v)
    ll ans = 1;
    ll unique = 1 , new_unique = 0;
    map<ll,ll> need;
    map<ll,ll> future;
    map<ll,ll> empty;
    need[v[0]]++;
    for(ll i = 1 ; i < n ; i++) {
        if(future[v[i]] == 0) new_unique++;
        
        future[v[i]] = 1;
        

        if(need[v[i]]) {
                need[v[i]]--,unique--;
            }

        if(unique == 0) {
            ans++;
            unique = new_unique;
            new_unique = 0;

            need = future;
            future = empty;
        }

    }
    cout<<ans<<endl;
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
