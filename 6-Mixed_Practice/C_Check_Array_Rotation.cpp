//File name:Check array rotation
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Mixed_Practice (C)
//Description:Practice
//Last Changed:29-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n; cin>>n;
    vector<ll>a(n);
    bool flag =true;
    for (int  i = 0; i < n; i++)cin>>a[i];

    for (int i = 0; i < n-1; i++)
    {
        if(a[i]>a[i+1]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"0\n";
        return;
    }

    for (int i = 1; i < n; i++)
    {
        if(a[i]<a[i-1]){
            cout<<i<<"\n";
            return;
        }
    }
    
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) {
        solve();
    }

}