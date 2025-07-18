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
    vector<ll> v(n),o(1),e(1);
    ai(v)
    lp(n)
    {
        if(i%2 == 0) e.push_back(v[i]);
        else o.push_back(v[i]);
    }
    for(int i = 1 ; i < e.size() ; i++)
        e[i] += e[i-1];
    for(int i = 1 ; i < o.size() ; i++)
        o[i] += o[i-1];

    ll indxE = 1 , indxO = 0;
    for(int i = 1 ; i < n ; i++)
    {
        if(i%2 == 0) indxE++;
        else indxO++;
        ll ev = e[indxE] - o[indxO] + o[o.size()-1];
        cout<<e[indxE] <<" "<< o[indxO] <<" "<< o[o.size()-1]<<endl;
        cout<<ev<<" "<<endl;
        
        
    }

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
