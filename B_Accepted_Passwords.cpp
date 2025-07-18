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
    string a,b;
    cin>>a>>b;
    if(a == b ){
        cout<<"yes"<<endl;
        return;
    }
    if(a.size() < 8 || (a.size() != b.size() && a.size() != 1 + b.size())){
        cout<<"no"<<endl;
        return;
    }
    ll indx;
    bool flag = false;
    lp(min(a.size(),b.size())){
        if(a[i] != b[i]){
            flag = true;
            indx = i;
        }
    }
    if(!flag){
        cout<<"yes"<<endl;
        return;
    }
    for(int i = indx+1 ; i < min(a.size(),b.size()) ; i++){
        if(a[i] != b[i]){
            flag = false;
            break;
        }
    }
    ll n = b.size()  , m = a.size() - 1; 
    bool flag0 = true;
    for(int i = indx ; i < min(m,n) ; i++){
        if(a[i+1] != b[i]){
            flag0 = false;
            break;
        }
    }
    if(!flag && !flag0) cout<<"no"<<endl;
    else cout<<"yes"<<endl;
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
