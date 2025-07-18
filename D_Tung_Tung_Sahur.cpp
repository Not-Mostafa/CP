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
    vll n,m;
    ll temp = 1;
    for(int i = 1 ; i < a.size() ; i++){
        if(a[i] == a[i-1]){
            temp++;
        }
        else{
            n.push_back(temp);
            temp = 1;
        }
    }
    n.push_back(temp);
    temp = 1;
    for(int i = 1 ; i < b.size() ; i++){
        if(b[i] == b[i-1]){
            temp++;
        }
        else{
            m.push_back(temp);
            temp = 1;
        }
    }
    m.push_back(temp);
    if(n.size() != m.size() || a[0] != b[0]){
        cout<<"NO"<<endl;
        return;
    }
    lp(n.size()){ // 5 1
        if( n[i]*2 < m[i] ||  n[i] > m[i] ){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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
