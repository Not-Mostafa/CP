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
    int n,x;cin>>n>>x;
    vector<pair<ll,ll>> v;
    bool found = false;
    lp(n)
    {
        pair<ll,ll> p;
        cin>>p.first;
        p.second = i+1;
        v.push_back(p);
    }
    sort(all(v));
    lp(n)
    {
        for(int j = i+1; j < n ; j++)
        {
            int l = j+1 , r = n-1;
            while(r > l)
            {
                ll temp = v[i].first + v[l].first + v[r].first + v[j].first;
                if(l == i || temp < x)
                {
                    l++;
                }
                else if(r == i || temp > x)
                {
                    r--;
                }
                else if (temp == x)
                {
                    cout<<v[i].second<<" "<<v[j].second<<" "<<v[l].second<<" "<<v[r].second;
                    found = true;
                    break;
                }
        }
            if(found)
            {
                return;
            }
        }
    }
    cout<<"-1";
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
