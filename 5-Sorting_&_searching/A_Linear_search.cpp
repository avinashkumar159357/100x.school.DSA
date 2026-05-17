//File name:Linear search
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:sorting and searching(A)
//Description:getting familiar with sorting 
//Last Changed:15-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<long long>a(n);
    for (int i = 0; i < n; i++) cin>>a[i];
    int x; cin>>x;
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==x){
            flag=true;
            break;
        }
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;  // cin>>t;
    while(t--) {
        solve();
    }

}