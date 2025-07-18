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
const int N = 3e5 + 5;
const int M = 1e9 + 7;
const ll OO = 0x3f3f3f3f3f3f3f3f;

vll pre(N);

void solve()
{
    int a,b;
    cin>>a>>b;
    ll xr = pre[a-1];
    if(xr == b)
        cout<<a<<endl;
    else
        cout<<((xr^b) != a? a+1:a+2)<<endl;
}
int main() {
    FIO;
    int test_cases = 1;
    for(int i = 1; i < N ; i++)
    {
        pre[i] = pre[i-1]^i;
    }
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}
