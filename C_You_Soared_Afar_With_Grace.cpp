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
    ll n;
    cin>>n;
    vll v1(n),v2(n);
    ai(v1) ai(v2)
    vector<array<ll,3>> pairs(n);
    map<array<ll,2>,ll> m;
    map<ll,ll> ms;
    lp(n){
        pairs[i][0] = v1[i];
        pairs[i][1] = v2[i];
        m[{v1[i],v2[i]}]++;
        ms[v2[i]] = i;
    }    
    bool flag = false;
    if(n%2 == 0) flag = true;
    lp(n){
        if(m[{v2[i],v1[i]}] == 0 || (flag && v2[i] == v1[i])){
            cout<<-1<<endl;
            return;
        }
        if(v2[i] == v1[i]) flag = true;
        
    }

    vector<pair<ll,ll>> ans;
    if(n%2 == 1 && pairs[n/2][0] != pairs[n/2][1]){
        ll swap_location;
        lp(n){
            if(pairs[i][0] == pairs[i][1]){
                swap_location = i;
                break;
            }
        }
        swap(ms[pairs[swap_location][1]],ms[pairs[n/2][1]]);
        swap(pairs[swap_location],pairs[n/2]);
        ans.push_back({swap_location,n/2});
    }
    lp(n/2){
        if(pairs[i][0] != pairs[n-i-1][1]) {
            ll swap_location = ms[pairs[i][0]];
            // Swap ms[pairs[swap_location][1]] with ms[pairs[n-i-1][1]]
            swap( ms[pairs[swap_location][1]] , ms[pairs[n-i-1][1]] );
            swap(pairs[swap_location],pairs[n-i-1]);
            ans.push_back({swap_location,n-i-1});
        }
    }
    cout<<ans.size()<<endl;
    lp(ans.size()){
        cout<< ans[i].first+1 << " " << ans[i].second+1 <<endl;
    }
    // Debug
    // lp(n){
    //     cout<<pairs[i][0]<<" ";
    // }
    // cout<<endl;lp(n){
    //     cout<<pairs[i][1]<<" ";
    // }
    // cout<<endl;
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
