#include <bits/stdc++.h>
using namespace std;
#define FIO ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define ll long long
#define all(container) (container).begin(), (container).end()
#define ai(thing) for (auto& i : thing) cin >> i;
typedef vector<ll> vll;
const ll OO = 0x3f3f3f3f3f3f3f3f;

void solve() {
    ll n, m;
    cin >> n >> m;
    vll v(n), b(m);
    ai(v);
    ai(b);
    
    sort(all(b)); 
    stack<ll> s;

    for (ll i = 0; i < n; i++) {
        ll temp = v[i];
        if (s.empty()) 
        {
            temp = min(v[i], b[0] - v[i]);
        } 
        else 
        {
            auto it = lower_bound(b.begin(), b.end(), v[i] + s.top());
            ll t = distance(b.begin(), it);

            if (t < b.size()) {
                if (min(v[i], b[t] - v[i]) >= s.top())
                    temp = min(v[i], b[t] - v[i]);
                else if (max(v[i], b[t] - v[i]) >= s.top())
                    temp = max(v[i], b[t] - v[i]);
                else {
                    cout << "NO\n";
                    return;
                    }
            }   
            else if(temp < s.top())
            {
                cout << "NO\n";
                return;
            }           
        }
        s.push(temp);
    }
    cout << "YES\n";
}

int main() {
    FIO;
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}
