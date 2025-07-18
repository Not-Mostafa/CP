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
    ll n;cin>>n;
    vll v(n);
    ai(v)
    ll ct = 8;
    map<ll,ll> m;
    m[0] = 3;
    m[1] = 1;
    m[2] = 2;
    m[3] = 1;
    m[5] = 1;
    lp(n)
    {
        if(m[v[i]])
        {
            m[v[i]]--;
            ct--;
        }
        if(ct == 0)
        {
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<0<<endl;
    
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
