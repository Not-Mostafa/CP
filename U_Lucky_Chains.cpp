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
const int N = 1e7 + 5;
const int M = 1e9 + 7;
const ll OO = 0x3f3f3f3f3f3f3f3f;

vector<ll> v(N,0);

void pre(){
    v[N - 1] = 1;  // A single number is always pairwise coprime with itself
    for (int i = N - 2; i >= 0; i--) {
        if (gcd(i, i + 1) == 1) {
            v[i] = v[i + 1] + 1;
        } else {
            v[i] = 1;  // Start a new sequence
        }
    }
}

void solve(){
    pre();
    lp(20){
        cout<<i<<v[i]<<endl;
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
