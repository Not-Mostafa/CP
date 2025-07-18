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
    ll k;cin>>k;
    vll v(n); ai(v) 
    map<ll,deque<ll>> m;
    lp(n)
        m[v[i]].push_back(i+1);
    sort(all(v));
    lp(n)
    {
        int l = 0 , r = n-1;
        while(l < r)
        {
            if(l!=i && r != i)
            {
                int temp = v[i] + v[l] + v[r];
                if(temp > k) r--;
                else if(temp < k) l++;
                else
                {
                    cout<<m[v[i]][0]<<" ";
                    m[v[i]].pop_front();
                    cout<<m[v[r]][0]<<" ";
                    m[v[r]].pop_front();
                    cout<<m[v[l]][0];
                    return;
                }
            }
            else if(l == i) l++;
            else r--;
        }
    }
    cout<<"IMPOSSIBLE";
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
