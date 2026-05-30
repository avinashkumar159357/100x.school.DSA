//File name: Laxmi Chit Fund
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:C
//Description:Contest-III
//Last Changed:30-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){  
    int n; cin>>n;
    vector<ll>a(n);
    ll sum=0;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    ll maxi=*max_element(a.begin(),a.end());
    ll mini=*min_element(a.begin(),a.end());

    cout<<sum<<" "<<maxi<<" "<<mini<<" "<<sum/n;
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}