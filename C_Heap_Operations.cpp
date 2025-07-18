#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define lp(size) for (int i = 0; i < size; i++)
#define ai(thing) for(auto& i : thing) cin>>i;
#define au(thing) for(auto& i : thing)
#define lpeq(size) for (int i = 0; i <= size; i++)
#define pqg priority_queue<ll , vector<ll> , greater<ll>>

using namespace std;

void solve()
{
    pqg pq;
    ll n;cin>>n;
    deque<string> ans;
    while(n--)
    {
        string o;cin>>o;
        if(o == "insert")
        {
            ll k;cin>>k;
            pq.push(k);
            ans.push_back("insert "+to_string(k));
        }
        else if(o == "getMin")
        {
            ll k;cin>>k;
            while(!pq.empty() && pq.top() < k)
            {

                pq.pop();
                ans.push_back("removeMin");
            }
            if(pq.empty() || pq.top() != k)
            {
                pq.push(k);
                ans.push_back("insert "+to_string(k));
            }
            ans.push_back("getMin "+ to_string(k));
        }
        else
        {
            if(pq.empty())
            {
                pq.push(1);
                ans.push_back("insert 1");
            }
            pq.pop();
            ans.push_back("removeMin");
        }
    }
    cout<<ans.size()<<endl;
    while(ans.size())
    {
        cout<<ans[0]<<endl;
        ans.pop_front();
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
