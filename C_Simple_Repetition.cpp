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

bool p(ll n)
{
    if(n == 2 || n == 3) return true;
    if(n%2 == 0 || n == 1) return false;
    for(int i = 3; i*i <= n; i+=2){
        if(n%i == 0) return false;
    }
    return true;
}

void solve() // 1 2 -> 11  2 2 -> 22
{
    ll n,k;cin>>n>>k;
    if(k == 1) {
        if( p(n) ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if( (k == 2 && n == 1) )
        cout<<"YES"<<endl;
    else {
        cout<<"NO"<<endl;
    }
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
