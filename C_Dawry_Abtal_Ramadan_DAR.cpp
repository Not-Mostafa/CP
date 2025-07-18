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
    int n;cin>>n; 
    deque<pair<vector<ll> , string>> v;
    lp(n)
    {
        string k;
        cin.ignore();
        getline(cin,k);
        vector<ll> temp(3);
        ai(temp)
        pair<vector<ll> , string> p;
        p.first = temp;
        p.second = k;
        v.push_back(p);
    }
    sort(all(v));
    while(v[0].first[0] != v[v.size() - 1].first[0])
        v.pop_front();
    cout<<v[0].second<<endl;
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
