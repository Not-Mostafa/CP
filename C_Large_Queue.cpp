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
    queue<pair<ll,ll>> q;
    ll p;
    cin>>p;
    while(p--){
        ll n;
        cin>>n;
        if(n == 1){
            ll c,x;
            cin>>c>>x;
            q.push({c,x});
        }
        else{
            ll k;
            cin>>k;
            ll ans = 0;
            while(k){
                if(q.front().first >= k){
                    ans += k*q.front().second;
                    q.front().first -= k;
                    k = 0;
                }
                else{
                    ans+=q.front().first*q.front().second;
                    k-=q.front().first;
                    q.pop();
                }
            }
            cout<<ans<<endl;
        }
    }
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
