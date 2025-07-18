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
    ll n,k;cin>>n>>k;
    vector<pair<ll,ll>> a(n);
    lp(n){
        cin>>a[i].first;
    }
    lp(n){
        cin>>a[i].second;
    }
    sort(all(a));
    bool found = false;
    ll tot;
    lp(n){
        if(a[i].second != -1){
            found = true;
            tot = a[i].first + a[i].second;
            break;
        }
    }
    if(!found){
        cout<<k - a[n-1].first + a[0].first + 1<<endl;
        return ; 
    }
    for(int i = 0 ; i < n ;i++){
        if(a[i].second != -1){
            if(a[i].first + a[i].second != tot){
                cout<<0<<endl;
                return ; 
            }
        }
        else if(tot - a[i].first > k || tot - a[i].first < 0){ // new + a[i].first = tot , new = tot - a[i].first <= k
            cout<<0<<endl;
            return ; 
        }
    }
    cout<<1<<endl;
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
