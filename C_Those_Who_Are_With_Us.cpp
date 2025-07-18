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
    ll n,m;
    cin>>n>>m;
    vector<vll> v(n);
    ll mx = 0;
    lp(n){
        for(int j = 0 ; j < m ; j++){
            ll x;
            cin>>x;
            v[i].push_back(x);
            mx = max(mx,x);
        }
    }
    ll row,col;

    lp(n){
        ll flag = 0;
        for(int j = 0 ; j < m ; j++){
            if(v[i][j] == mx){
                row = i;
                col = j;
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            break;
        }
    }
    vector<vll> temp = v;
    lp(n){ // removed all col
        temp[i][col]--;
    } 
    lp(m){ // removed all row
        v[row][i]--;
    }

    lp(n){
        ll flag = 0;
        for(int j = 0 ; j < m ; j++){ // remove from col
            if(temp[i][j] == mx){
                flag = 1;
                for(int k = 0 ; k < m ; k++){
                    if(k != col)
                        temp[i][k]--;
                }
                break;
            }
        }
        if(flag == 1){
            break;
        }
    }
    
    lp(n){
        ll flag = 0;
        for(int j = 0 ; j < m ; j++){ // remove from col
            if(v[i][j] == mx){
                flag = 1;
                for(int k = 0 ; k < n ; k++){
                    if(k != row)
                        v[k][j]--;
                }
                break;
            }
        }
        if(flag == 1){
            break;
        }
    }
    ll mx1 = 0;
    ll mx2 = 0;

    lp(n){
        for(int j = 0 ; j < m ; j++){
            mx1 = max(mx1,v[i][j]);
        }
    }

    lp(n){
        for(int j = 0 ; j < m ; j++){
            mx2 = max(mx2,temp[i][j]);
        }
    }
    cout<<min(mx1,mx2)<<endl;
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
