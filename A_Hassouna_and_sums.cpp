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
    vll v(n);ai(v)
    int cases = 0 , ct = 0;
    lp(n-1) if(v[i] == -1 && v[i+1] == -1) cases = 1;
    lp(n) if(v[i] == -1 && cases == 0) cases = 2;
    lp(n) if(v[i] == -1) ct++;

    if(cases == 1) cout<< n - ct + 2 - (ct - 2);
    else if(cases == 2) cout<< n - ct + 1 - (ct - 1);
    else if(ct == 0) cout<< n - 4;
    else cout<< n - 2*ct ;
    cout<< endl;

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
