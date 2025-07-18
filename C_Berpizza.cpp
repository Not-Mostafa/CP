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

struct Compare {
    bool operator()(const pair<ll, ll>& a, const pair<ll, ll>& b) {
        if (a.first == b.first) {
            return a.second > b.second; // Minimize second value if first values are equal
        }
        return a.first < b.first; // Maximize first value
    }
};

void solve()
{
    int h;cin>>h;
    map<pair<ll,ll>,ll> m;
    deque< pair<ll,ll> > d;
    priority_queue< pair<ll,ll> , vector<pair<ll, ll>>, Compare> mx;
    int n = 1;
    while(h--)
    {
        int x;
        cin>>x;
        if(x == 1)
        {
            ll k;cin>>k;
            pair<ll,ll> temp = {k,n};
            m[temp]++;
            d.push_back(temp);
            mx.push(temp);
            n++;
        }
        else if(x == 2)
        {   
            while(m[d.front()] == 0)
            {
                d.pop_front();
            }
            cout<<d.front().second<<" ";
            m[d.front()]--;
            d.pop_front();
        }
        else
        {
            while(m[mx.top()] == 0)
            {
                mx.pop();
            }
            cout<<mx.top().second<<" ";
            m[mx.top()]--;
            mx.pop();
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
