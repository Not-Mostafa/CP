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
    multiset<ll> s1,s2;
    ll n;cin>>n; ll k;cin>>k;
    vll v(n);
    ai(v)
    vll temp(k);
    lp(k)
        temp[i] = v[i];
    sort(all(temp));
     //  0 1 2 3  4 5 6   k = 7 , k/2-1 = 3-1 = 2
    //   0 1 2 3  4 5 6 7    so if k = 8 , we will take until 4

    lp(k/2 + ((k%2 == 0)?0:1)) 
        s1.insert(temp[i]);
    for(int i = k/2 + ((k%2 == 0)?0:1) ; i < k ; i++)
        s2.insert(temp[i]);
    cout<<*prev(s1.end())<<" ";
    for(int i = k ; i < n ; i++)
    {
        ll out = v[i-k], in = v[i];

        if(s1.empty() || *prev(s1.end()) < in) s2.insert(in);
        else s1.insert(in);

        if(s1.count(out)) s1.erase(s1.find(out));
        else s2.erase(s2.find(out));

        while(s1.size() < s2.size()) // stop when s1 = s2 + 1 || s1 = s2 so it will be s1 >
        {
            s1.insert(*s2.begin());
            s2.erase(s2.begin());
        }
        while(s1.size() > s2.size() + 1)
        {
            s2.insert(*prev(s1.end()));
            s1.erase(prev(s1.end()));
        }
        

        cout<<*prev(s1.end())<<" ";
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