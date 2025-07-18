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
    string k;cin>>k;
    ll num = stoll(k), n = k.size();
    vector<ll> canUse(n/2);
    lp(n)
    {
        string cha;
        cha.push_back(k[i]);
        if(i+1 - n/2 == 1)
        {
            continue;
        }
        else if(canUse[i] == 0)
        {
            canUse[i] = stoll(cha);
        }
        else{
            canUse[n/2-i-1] = min(stoll(cha) , canUse[i]);
        }
    }
    for(auto i:canUse)
    {
        cout<<i<<" ";
    }
    //may be the solution utilizes number max t
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
