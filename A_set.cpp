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
    priority_queue<ll> q;
    map<ll,bool> m;
    int n;cin>>n;
    n++;
    while(n--)
    {
        string k ;cin>>k;
        if(k == "insert")
        {
            int x;cin>>x;
            m[x] = 1;
            q.push(x);
        }
        else if(k == "find")
        {
            int x;cin>>x;
            if(m[x] == 1)
            {
                cout<<"found\n";
            }
            else if(m[x] == 0)
            {
                cout<<"not found\n";
            }
        }
        else if(k == "lower_bound")
        {
            int x;cin>>x;
            cout<<lower_bound(q.begin(), q.end() , x);
        }
        else
        {
            int x;cin>>x;
            cout<<upper_bound(q., q.end() , x);
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
