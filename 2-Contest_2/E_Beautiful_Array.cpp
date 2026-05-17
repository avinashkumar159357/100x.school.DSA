//Problem name:Beautiful Array
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:contest (E)
//Description:array
//Last Changed:1-05-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n; cin>>n;
    vector<ll>a(n);
    bool flag= true;
    for(int i=0; i<n; i++) cin>>a[i];
        
    for(int i=0; i<n-1; i++){
        if(a[i]!=a[i+1]){
            flag=false;
            break;
        }
    }

    if(flag) cout<<"YES";
    else cout<<"NO";
}

int main() {
    fastio;
    int TC=1;// cin>>TC;
    while(TC--) {
        solve();
    }

}    

    