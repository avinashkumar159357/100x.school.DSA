//File name: Second Largest Element
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Mixed practice (A)
//Description:Practice
//Last Changed:28-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve(){  
    int n; cin>>n;
    vector<int>a(n);
    bool flag=true;
    for (int i = 0; i < n; i++) cin>>a[i];
    for (int i = 1; i < n; i++)
    {
        if(a[i]!=a[i-1])flag=false;
    }
    if(flag){
        cout<<"-1";
        return;
    }
    sort(a.begin(),a.end());
    
    for (int i = n-2; i >=0; i--)
    {
        if(a[i]!=a[n-1]){
            cout<<a[i];
            break;
        }
    }
    
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1; //cin>>t;
    while(t--) {
        solve();
    }

}