#include<bits/stdc++.h>
using namespace std;

void solve(){   //reverse using a STL function
    int n; cin>>n;
    vector<long long>a(n),b;

    for(int i=0; i<n; i++) cin>>a[i];

    reverse(a.begin(),a.end());

    for(int x:a) cout<<x<<" ";   
}
/*void solve(){   //reverse using a second array
    int n; cin>>n;
    vector<long long>a(n),b;

    for(int i=0; i<n; i++) cin>>a[i];

    for (int i = n-1; i >= 0; i--) b.push_back(a[i]);

    for(int x:b) cout<<x<<" ";   
}*/
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1; //cin>>t;
    while(t--) {
        solve();
    }
}