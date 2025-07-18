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
typedef vector<ld> vld;
const int N = 1e5 + 5;
const int M = 1e9 + 7;
const ll OO = 0x3f3f3f3f3f3f3f3f;

void solve()
{
    int n;cin>>n;
    vll a(n);
    ai(a)
    ll ans = 0;
    ll prev = a[0], x=0;
    for(int i = 1; i < n; i++){
        ll te = a[i];
        while(prev < a[i] && x>0){
            x--;
            a[i] /=2;
        }
        while(a[i] < prev){
            x++;
            a[i] *=2;
        }
        ans += x;
        prev = te;
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
