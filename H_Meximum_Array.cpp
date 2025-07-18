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
    deque<ll> v(n);
    ai(v)
    map<ll,ll> m,p;
    vll ans;
    ll mex = 0;
    ll start = 0;
    ll prevstart = 0;
    while(start < n){
        prevstart = start;
        for (int i = start; i < n; i++) {
            m[v[i]]++;
            if(m[mex] > 0){
                start = i+1;
            }
            while(m[mex] > 0) {
                mex++;
            }   
        }
        if(start == prevstart) start = n;
        ans.push_back(mex);
        mex = 0;
        m = p;
    }
    cout<<ans.size()<<endl;
    lp(ans.size()) cout<<ans[i]<< " ";
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
