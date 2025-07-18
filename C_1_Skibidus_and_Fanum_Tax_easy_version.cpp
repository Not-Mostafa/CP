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
    ll n,m;cin>>n>>m;
    vector<ll> v(n);
    ai(v) 
    ll m1;cin>>m1;
    stack<ll> s;
    lp(n)
    {
        ll temp = max(m1-v[i],v[i]);
        if(s.size() && min(m1-v[i],v[i]) >= s.top())
        {
            temp = min(m1-v[i],v[i]);
        }
        else if(s.size() == 0)
        {
            temp = min(m1-v[i],v[i]);
        }
        
        if(s.size() == 0|| temp >= s.top())
        {
            s.push(temp);
        }
        else
        {
            
            cout<<"NO\n";
        }
    }
    
    cout<<"YES\n";
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
