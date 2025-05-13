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
    vll v(n); ai(v)
    ll mn = 6e9;
    ll ans = 0;
    // if(v[n-1] == n || v[0] == 1) {
    //     cout<<1<<endl;
    //     return;
    // }
    lp(n){ // now thats wrong
        mn = min(mn,v[i]);
        if(v[i] == i+1){
            if( v[i] != mn ){
                cout<<1+ans<<endl;
                return;
            }
            else if(n%2 == 1 && i != n/2){
                cout<<1<<endl;
                return;
            }
            else if(n%2 == 0){
                cout<<1<<endl;
                return;
            }            
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
