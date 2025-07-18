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
    ll n,k,d;
    cin>>n>>k>>d;
    vll v(n);
    ai(v)
    sort(all(v));
    vector<pair<ll,ll>> fl(n);
    ll curr = 0 , remaining = n;
    lp(n) fl[i].second = v[i],fl[i].first = 1;
    for(int day = 0 ; day < d; day++){
        lp(n){
            if(fl[i].first == 0){
                fl[i].second--;
                if(fl[i].second == 0){
                    fl[i].first = 1;
                    fl[i].second = v[i];
                    remaining++;
                }
            }
        }
        for(int i = 0 ; i < n && remaining > k; i++){
            if(fl[i].first == 1){
                fl[i].first = 0;
                curr++;
                remaining--;
            }
        }
    }
    cout<<curr<<endl;
    // for(int mask = 0; mask < 2<<n ; mask++){
    //     vector<pair<ll,ll>> taken(n);
    //     for(int i = 0 ; i < n ; i++){
    //         if(1<<i & mask) taken[i].first = 1;
    //     }
    //     ll curr = k , remaining = n - k;

    //     for(int i = 1 ; i < d ; i++) { //loop every day
    //         for(int j = 0 , j < n ; j++) {
    //             taken[j].second--;
    //             if(taken[j].second == 0){
    //                 taken[j].second = v[j];
    //                 curr++;
    //             }
    //         }

    //     }
    //     ans = max(ans,curr);
    // }
    
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
