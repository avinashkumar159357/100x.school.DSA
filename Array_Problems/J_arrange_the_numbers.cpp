#include<bits/stdc++.h>
using namespace std;
//#define int long long
void solve(){   
    int n; cin>>n;
    for (int  i = 1; i <= n; i+=2) cout<<i<<" ";
    for (int i = n-(n%2); i>=2; i-=2) cout<<i<<" ";
    cout<<"\n";
    
}    
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}    

 