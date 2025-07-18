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
    sort(all(v));
    bool flag1 = false;
    lp(n-1){
        if(v[i+1] * v[0]  != v[i]*v[1]){
            flag1 = true;
            break;
        }
    }
    vector<pair<ll,ll>> nw;
    lp(n){
        if(v[i] < 0) nw.pb({-1*v[i] , -1});
        else nw.pb({v[i] , 1});
    }
    sort(all(nw));
    bool flag2 = false;
    lp(n-1){
        if(nw[i+1].first * nw[0].first  != nw[i].first * nw[1].first || nw[i].second * nw[1].second != nw[i+1].second * nw[0].second){
            flag2 = true;
            break;
        }
    }
    if(flag1 && flag2) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
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
