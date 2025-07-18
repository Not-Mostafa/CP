#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define lp(size) for (int i = 0; i < size; i++)
#define ai(thing) for(auto& i : thing) cin>>i;
#define au(thing) for(auto& i : thing)
#define lpeq(size) for (int i = 0; i <= size; i++)

using namespace std;

void solve()
{
    stack <ll> s;
    lp(5)
    {
        ll x;cin>>x;
        s.push(x);
    }
    if(s.size())
    {
        s.pop();
    }
    lp(s.size()-1)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_cases = 1;
    //cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}
