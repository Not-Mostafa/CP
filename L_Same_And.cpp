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

string toBinary(ll num) {
    return bitset<64>(num).to_string(); 
}
ll binaryToDecimal(string binary) {
    return bitset<64>(binary).to_ullong();
}

void solve()
{
    ll n,m;cin>>n>>m;
    vector<string> ans;
    string mask = toBinary(n);
    string temp = mask;
    ll ptr = toBinary(m).size();
    while(ptr > 0 && binaryToDecimal(temp) <= m)
    {
        //cout<<ptr<<" "<<temp<<endl;
        ans.push_back(temp);
        string next = mask;
        ptr--;
        while(ptr > 0 && mask[ptr] == '1') ptr--;
        next[ptr] = '1';
        temp = next;
    }
    if(ans.size() > 1) {
        cout<<ans.size()<<endl;
        lp(ans.size())
        cout<<binaryToDecimal(ans[i])<<" ";
    }
    else cout<<"-1";
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
