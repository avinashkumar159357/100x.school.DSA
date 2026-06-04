//File name:Even Sum Query
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Array technique (B)
//Description:prefix sum
//Last Changed:4-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){ 
    ll n; cin>>n;
    vector<ll>a(n),pref(n+1,0);
    ll sum=0;
    for (int i = 0; i < n; i++){
        cin>>a[i];

        if(i%2!=0){
            sum+=a[i];
            pref[i+1]=sum;
        }else pref[i+1]=sum;
    } 
    
    int q,l,r; cin>>q;
    while (q--)
    {
        cin>>l>>r;
        cout<<pref[r]-pref[l-1]<<"\n";
    }
    
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    ll q=1; //  cin>>q;
    while (q--)
    {
        solve();
    }
    
}