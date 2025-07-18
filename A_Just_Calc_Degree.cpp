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

void solve() {z
    ll n;cin>>n;
    vector<vll> graph(n+1) ;
    lp(n-1){
        ll x;
        cin>>x;
        graph[x].pb(i+2);
    }
    ll temp;
    lp(n+1){
        temp = 0;
        for(ll j = 0 ; j < graph[i].size() ; j++){
            if(graph[graph[i][j]].size() == 0) temp++;
        }
        if(temp != 0 && temp < 3){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;

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
