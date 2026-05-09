#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>a(n);
    bool flag=true;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++){
        if(i!=(n-1)){
            if(a[i]>a[i+1]) flag=false;
        }
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }
}