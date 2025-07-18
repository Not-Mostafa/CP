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
   sort(all(v));
   ll gc = -1;
   ll mx = v[n-1];
   for(int i = 0; i < n ; i++){
        if(v[i] != mx) 
        {
            if(gc == -1) gc = mx-v[i];
            gc = gcd(mx-v[i],gc);
        }
   }
   ll ans1 = 0;
   for(int i = 0 ; i < n ; i++){
        ans1+=(mx-v[i])/gc;
   }
   cout<<ans1<<" "<<gc;
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
