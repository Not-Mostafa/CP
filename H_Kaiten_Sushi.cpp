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
    ll n ,m;cin>>n>>m;
    vector<ll> a(n),b(m);
    ai(a) ai(b)
    stack<pair<ll,ll>> s;
    vector<pair<ll,ll>> c;
    vector<ll> v;
    lp(n)
    {
        pair<ll,ll> temp ;
        temp.first = a[i];
        temp.second = i+1;
        if(s.size() && a[i] < s.top().first)
        {
            s.push(temp);
        }
        else if(s.size() == 0)
        {
            s.push(temp);
        }
    }
    while(s.size())
    {   //cout<<s.top().first<<" ";
        v.push_back(s.top().first);
        c.push_back(s.top());
        s.pop();
    }
    cout<<endl;
    lp(m)
    {
        ll temp = upper_bound(all(v),b[i]) - v.begin();
        //cout<<temp<<endl;
        if(temp != 0)
            cout<<c[temp-1].second<<endl;
        else cout<<"-1\n";
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
