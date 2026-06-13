//Problem name:Unqiue Visitors Count
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:Contest 4 (C)
//Description:
//Last Changed:13-06-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n; cin>>n;
    vector<ll>a(n),b;
    unordered_set<ll>st;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        st.insert(a[i]);
        b.push_back(st.size());
    }

    for (auto x : b)cout<<x<<" ";
}

int main() {
    fastio;
    int TC=1; // cin>>TC;
    while(TC--) {
        solve();
    }

}    

    