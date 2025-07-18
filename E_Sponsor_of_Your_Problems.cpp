//******************************************************
//*                3MK The GOAT                        *                            
//******************************************************
#include <bits/stdc++.h>
using namespace std;
#define FIO ios ::sync_with_stdio(false), cin.tie(nullptr), cout.tie(NULL)
#define ll long long
#define ld long double
#define all(container) (container).begin(), (container).end()
#define cl(x,y)  (x + y - 1) / y
#define lp(size) for (ll i = 0; i < size; i++)
#define rlp(size) for (ll i = size - 1; i >= 0; i--)
#define ai(thing) for(auto& i : thing) cin>>i;
#define au(thing) for(auto& i : thing)
#define pb push_back
typedef vector<int> vi;
typedef vector<ll> vll;
const int N = 1e5 + 5;
const int M = 1e9 + 7;
const ll OO = 0x3f3f3f3f3f3f3f3f;



void solve() {
    string L, R;
    cin >> L >> R;
    int n = L.size();
    vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(2, 1000000000)));
    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 2; b++) {
            dp[n][a][b] = 0;
        }
    }
    for (int pos = n-1; pos >= 0; pos--) {
        for (int tight_l = 0; tight_l < 2; tight_l++) {
            for (int tight_r = 0; tight_r < 2; tight_r++) {
                int low_d = (tight_l) ? (L[pos] - '0') : 0;
                int high_d = (tight_r) ? (R[pos] - '0') : 9;
                for (int d = low_d; d <= high_d; d++) {
                    int new_tight_l = (tight_l && (d == (L[pos] - '0'))) ? 1 : 0;
                    int new_tight_r = (tight_r && (d == (R[pos] - '0'))) ? 1 : 0;

                    int cost_here = 0;
                    if (L[pos] == R[pos]) {
                        if (d == L[pos] - '0') {
                            cost_here = 2;
                        } else {
                            cost_here = 0;
                        }
                    } else {
                        if (d == L[pos] - '0' || d == R[pos] - '0') {
                            cost_here = 1;
                        } else {
                            cost_here = 0;
                        }
                    }
                    dp[pos][tight_l][tight_r] = min(dp[pos][tight_l][tight_r],
                    cost_here + dp[pos+1][new_tight_l][new_tight_r]);
                }
            }
        }
    }
    cout << dp[0][1][1] << '\n';
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
