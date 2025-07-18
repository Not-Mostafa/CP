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
    ll x;
    cin>>x;
    vll ans;
    ans.push_back(1);
    for(ll i = 2; i*i <= x ; i++){
        if(x%i == 0) ans.push_back(i);
    }
    vll ans2;
    lp(ans.size()){
        cout<<ans[i]<<endl;
        ans2.push_back(x/ans[ans.size()-1-i]);
        if(i == 0 && ans2[0] == ans[ans.size()-1]) ans2.pop_back();
    }
    lp(ans2.size()) cout<<ans2[i]<<endl;
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
