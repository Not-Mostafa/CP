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
    ll first;
    ll last;
    cin>>first;
    if(n==2){
        cin>>last;
        if(last <= 2*first){
            cout<<2<<endl;

        }
        else cout<<-1<<endl;
        return;
    }
    deque<ll> d;
    vector<ll> v(n-2);
    lp(n-2){
        cin>>v[i];
    }
    sort(all(v));
    d.push_back(first);
    cin>>last;
    lp(n-2){
        d.push_back(v[i]);
    }
    d.push_back(last);
    last = first;
    ll ans = 2;
    lp(n){
        //cout<<d[i]<<" ";
        if(last*2 >= d[n-1]){
            cout<<ans<<endl;
            return;
        }
        if(i != 0 && i != n-1 && 2*last >= d[i]){
            while(i+2 < n && 2*last >= d[i+1]){
                i++;
            }
            ans++;
            last = d[i];
            //cout<<last<<" ";
        }
        else if(i == n-1 && 2*last < d[i]){
            cout<<-1<<endl;
            return;
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
