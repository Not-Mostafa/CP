#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin>>v[i];
        if(v[i]%2 == 0) cout<<v[i]-2<<" ";
        else cout<<v[i]+2<<" ";
    }
    return 0;
}
