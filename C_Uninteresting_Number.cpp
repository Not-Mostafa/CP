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
    string k;cin>>k;
    ll sum = 0,th = 0;
    ll t = 0;
    lp(k.size())
    {
        sum+= (k[i]-'0');
        if(k[i] == '2')
            t++;
        else if(k[i] == '3')
            th++;    
    }
    
    for (int i = 0; i < 10 && i <= th; i++)
    {
        for(int j = 0 ; j < 10 && j <= t; j++)
        {
            if(((sum+j*2+i*6) % 9) == 0)
            {   
                cout<<"YES\n";
                return;
            }
        }
    }
    
    cout<<"NO\n";
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
