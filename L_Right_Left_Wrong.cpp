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
    vll nums;
    deque<ll> lefts,rights;
    int n;cin>>n;
    lp(n){
        ll x;cin>>x;
        nums.push_back(x);
    }  
    string k;cin>>k;
    vll prefix(n+1);
    prefix[0] = 0; 
    for(int i = 0 ; i < n ; i++)
        prefix[i+1] = prefix[i] + nums[i];
    lp(n)
    {
        if(k[i] == 'L') lefts.push_back(i);
        else rights.push_back(i);
    } 
    ll ans = 0;    
    while(lefts.size() && rights.size() && lefts.front() < rights.back())
    {
        ans += prefix[rights.back()+1];
        ans -= prefix[lefts.front()];
        lefts.pop_front();
        rights.pop_back();
    }
    cout<<ans<<endl;
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
