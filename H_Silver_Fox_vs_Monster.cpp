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
    ll n,d,a; cin>>n>>d>>a;
    deque<array<ll,2> > monsters(n) , range;
    lp(n)
    {
        ll x,h;cin>>x>>h;
        monsters[i][0] = x,monsters[i][1] = h;
    }
    sort(all(monsters));
    ll ans = 0,effect = 0;

    while(monsters.size())
    {
        ll currx =  monsters.front()[0];
        ll currh =  monsters.front()[1];

        monsters.pop_front();

        while(range.size() && range.front()[0] < currx)
        {
            effect-=range.front()[1];
            range.pop_front();
        }

        ll bombs = (currh-effect+a-1)/a;
        ans +=bombs;

        effect += bombs*a;

        range.push_back({d*2+currx,bombs*a});

        while(monsters.size() && monsters.front()[0] - currx <= d*2)
        {
            while(range.size() && range.front()[0] < monsters.front()[0])
            {
                effect-=range.front()[1];
                range.pop_front();
            }
            if(monsters.front()[1] - effect <= 0) monsters.pop_front();
            else break;    
        }
    }


    cout << ans;
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
