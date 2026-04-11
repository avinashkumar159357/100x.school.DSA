#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,x; cin>>n>>x; 
    vector<long long>a(n);                
    for(int i=0; i<n;i++) cin>>a[i];
    int c=count(a.begin(),a.end(),x);
    cout<<c;
}
/*void solve(){           //brute force approach using for loop              
    long long n,x,c=0; cin>>n>>x; 
    vector<long long>a(n);                
    for(int i=0; i<n;i++) {
        cin>>a[i];
        if(a[i]==x) c++;
    }
    cout<<c;
}*/

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }
}