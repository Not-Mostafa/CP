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
    ll n,m;
    cin>>n>>m;
    deque<deque<ll>> d(n);
    map<deque<ll>,ll> ma;
    lp(n)
    {
        deque<ll> temp(m);
        for(int j = 0 ; j < m ; j++)
        {
            cin>>temp[j];
        }
        sort(all(temp));
        ma[temp] = i+1;
        d[i] = temp;
    }
    int temp = 0;
    sort(all(d));
    deque<ll> ans;
    lp(n)
    {
        int u = i;
        ans.push_back(ma[d[i]]);
        for(int j = 0 ; j < m ; j++)
        {
            
            if(d[i].front() != u) 
            {
                cout<<"-1\n";
                return ;
            }
            else d[i].pop_front();
            u+=n;
        }

    }
    au(ans) cout<<i<<" ";
    cout<<endl;
}
int main() {
    FIO;
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}
