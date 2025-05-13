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
    string s,t;cin>>s>>t;
    string temp = s+s+s,st = "";
   
    while(st.size() < t.size())
    {
        st+=temp;
    }
    ll cycle = 0,ans = -1;
    cout<<st<<endl;
    cout<<st.size()<<endl;
    lp(st.size())
    {
        ll tans = 0;
        cycle = 0;
        
        while(i < st.size() && st[i] == t[cycle])
        {
           // cout<<"here "<<st[i]<<" == "<<t[cycle]<<endl;
            cycle++;
            i++;
            if(cycle == t.size())
            {
                tans++;
                cycle = 0;
            }
        }
        //cout<<tans<<endl;
        if(st.size() != t.size()*tans) ans = max(ans,tans);
    }
    cout<<ans;

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
