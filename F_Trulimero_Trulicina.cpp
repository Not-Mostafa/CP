// Mosaab
#include <bits/stdc++.h>
using namespace std;
// #define int     long long
#define ll      long long
#define ld      long double
#define sz(s)   (int)(s).size()
#define all(s)  s.begin(),s.end()
#define rall(s) s.rbegin(),s.rend()
#define fi      first
#define se      second
#define el      "\n"
#define Cin(s)  for(auto&x:s)cin>>x;
#define Cout(s) for(auto&x:s)cout<<x<<' ';cout<<el;
// عَجَبًا لأَمْرِ المُؤْمِنِ، إنَّ أمْرَهُ كُلَّهُ خَيْرٌ
const int N = 1e6 + 9, M = 1e9 + 7, TC = 1;

void wll333() {
    int n, m, k;
    cin >> n >> m >> k;
    if (m % k == 0) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++, cnt++) {
                cout << (cnt + i) % k + 1 << ' ';
            }
            cout << el;
        }
    } else {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++, cnt++) {
                cout << cnt % k + 1 << ' ';
            }
            cout << el;
        }
    }
}

signed main() {
    // سَقفُ المُمكِنِ مُذهِل
    cin.tie(nullptr)->sync_with_stdio(false);
#if LOCAL_WLL333
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T = 1;
    if (TC) cin >> T;
    while (T--) wll333(), cout << "\n";
}