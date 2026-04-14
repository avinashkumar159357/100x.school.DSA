#include<bits/stdc++.h>
using namespace std;
//#define int long long
void solve(){   
    int n; cin>>n;
    vector<long long>a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    for (int i = 0; i < n; i+=2)
    {
        if(i!=(n-1)) swap(a[i],a[i+1]);
    }
    for(long long x:a) cout<<x<<" ";
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

 