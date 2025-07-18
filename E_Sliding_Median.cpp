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
    multiset<ll> s;
    ll n,k;cin>>n>>k;
    vll v(n); ai(v)
    lp(k)
        s.insert(v[i]);
    if(k%2 == 0)
    {
        auto it1 = s.begin();
        auto it3 = next(it1, k/2);
        auto it2 = next(it1, k/2+1);
        cout << (*it2+*it3)/2 <<" ";
    }
    else 
    {
        auto it1 = s.begin();
        auto it2 = next(it1, k/2);
        cout << *it2 <<" ";
    }
    for(int i = k ; i < n ; i++)
    {
        s.erase(s.find(v[i-k]));
        s.insert(v[i]); 
        auto it1 = s.begin();
        if(k%2 == 0)
        {
            auto it3 = next(it1, k/2);
            auto it2 = next(it1, k/2+1);
            cout << (*it2+*it3)/2 <<" ";
        }
        else 
        {
            auto it2 = next(it1, k/2);
            cout << *it2 <<" ";
        }
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
