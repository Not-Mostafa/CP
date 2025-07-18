#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define lp(size) for (int i = 0; i < size; i++)
#define ai(thing) for(auto& i : thing) cin>>i;
#define au(thing) for(auto& i : thing)
#define lpeq(size) for (int i = 0; i <= size; i++)

using namespace std;

void solve()
{
    ll n;cin>>n;
    if(n >= 5)
    {
        for(int i = 2 ; i <= n ; i +=2)
        {
            if(i != 4) cout<<i<<" ";
        }
        cout<<"4 5 ";
        for(int i = 1 ; i <= n ; i +=2)
        {
            if(i != 5) cout<<i<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"-1\n";
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}
