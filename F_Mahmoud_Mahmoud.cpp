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
    string a,b;cin>>a>>b;
    map<char,int> m;
    rlp(b.size() - 1)
    {
        if(m[b[i]] == 0) m[b[i]] = i;
        if(i == 0 && m[b[i]] == 0) m[b[i]] = -1;
    }
    string ans,first;
    int s = -2 , ind ;
    bool flag = false;
    lp(a.size())
    {
        first.push_back(a[i]);
        if(m[a[i]] != 0 && i > 0) 
        {
            string temp = first;
            int temp2 = b.size() - m[a[i]] - 1;
            if(temp2 + first.size() <  s)
            {
                s = temp2 + first.size();
                ind = m[a[i]] + 1 ;
                ans = first;
            }
        }   
    }
    //substr skips first ind+1 chars
    if(s == -2) { cout<<"-1"; return;}
    if(ind != 0) cout<<ans<<b.substr(ind);
    else cout<<ans<<b.substr(1);
    
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
