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
    queue<string> o,t,th,c;
    lp(n)
    {
        string x,b;cin>>x>>b;
        if(b == "captain")
        {
            c.push(x);
        }
        else if(b == "woman" || b == "child")
        {
            t.push(x);
        }
        else if (b == "rat")
        {
            o.push(x);
        }
        else if(b == "man")
        {
            th.push(x);
        }
    }
    while(o.size())
    {
        cout<<o.front()<<endl;
        o.pop();
    }
    while(t.size())
    {
        cout<<t.front()<<endl;
        t.pop();
    }
    while(th.size())
    {
        cout<<th.front()<<endl;
        th.pop();
    }
    while(c.size())
    {
        cout<<c.front()<<endl;
        c.pop();
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
