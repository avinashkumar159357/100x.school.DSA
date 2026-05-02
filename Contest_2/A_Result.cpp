//Problem name:Result day
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:contes(A)
//Description:array
//Last Changed:1-05-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n,c=0 ; cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++) cin>>a[i];
        
    int p; cin>>p;
    
    for(int i=0; i<n; i++) {
        if(a[i]>=p)c++;
    }
    cout<<"Pass: "<<c<<"\n";
    cout<<"Fail: "<<n-c;
}

int main() {
    fastio;
    int TC=1;// cin>>TC;
    while(TC--) {
        solve();
    }

}    

    