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

map<ll,bool> isVisited;
bool degree = false;


ll find_connection(int node, vector<vector<ll>> v)
{
    stack<int> s;
    s.push(node);
    ll temp = 0;
    while(s.size())
    {
        int x = s.top();
        s.pop();
        if(!isVisited[x])
        {
            isVisited[x] = true;
            for(auto i:v[x])
            {
                s.push(i);
            }
            temp++;
        }
    }
    return temp;
}


void solve()
{
    int n;cin>>n;
    ll ans = 0;
    vector<vector<ll>> v(n+1);
    lp(n)
    {
        int x,y;cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i = 1; i <= n ; i++)
    {
        cout<<i<<" : "<<v[i].size()<<endl;
        if(v[i].size() == 4 ||v[i].size() == 1 )
        {
            if(v[i].size() == 4) degree = true;
        }
        else 
        {
            cout<<"-1";
            return ;
        }
    }
    if(!degree)
    {
        cout<<"-1";
        return ;
    }
    for(int i = 1; i <= n ; i++)
    {
        ans = max(find_connection(i,v),ans);
    }
    cout<<ans<<endl;

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
