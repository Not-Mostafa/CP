#include <bits/stdc++.h>
using namespace std;
#define FIO ios ::sync_with_stdio(false), cin.tie(nullptr), cout.tie(NULL)
#define ll long long
#define ld long double
#define all(container) (container).begin(), (container).end()
#define cl(x,y)  (x + y - 1) / y
#define lp(size) for (int i = 0; i < size;i++)
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
    vector<ll> a(n+1),b(n);
    ai(a) ai(b)
    ll ans = 0;
    lp(n)
    {
       if(b[i]-a[i] >= 0)
       {
            ans+=a[i];
            b[i]-=a[i];
       } 
       else
       {
            ans+=b[i];
            b[i] = 0;
       }
       if(b[i]-a[i+1] >= 0)
       {
            ans+=a[i+1];
            a[i+1]=0;
       } 
       else
       {
            ans+=b[i];
            a[i+1]-=b[i];
       }
    }    
    cout<<ans;
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
