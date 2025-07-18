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

void solve(){
    ll n;cin>>n;
    vll a(n);
    ai(a)
    ll k = 0;
    bool valid = true;
    if (n > 1) {
        k = a[1] - a[0];
        for (int i = 2; i < n; i++) {
            if (a[i] - a[i-1] != k) {
                valid = false;
                break;
            }
        }
    }

    ll d = 2 * a[0] - a[1];

    if (d < 0 || !valid || d % (n + 1) != 0) {
        cout << "NO\n";
        return;
    }

    ll y = d / (n + 1);
    ll x = k + y;

    if (x < 0) {
        cout << "NO\n";
    } 
    else {
        cout << "YES\n";
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
