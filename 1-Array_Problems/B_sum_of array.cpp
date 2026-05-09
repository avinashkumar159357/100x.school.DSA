#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<long long>a(n);
    long long sum=0;
    for(int i=0; i<n;i++) {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum;
}    


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }
}