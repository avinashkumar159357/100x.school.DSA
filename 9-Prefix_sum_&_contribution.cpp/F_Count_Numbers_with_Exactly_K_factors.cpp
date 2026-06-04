//File name: Count Numbers with Exactly K factors
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Array technique (F)
//Description:prefix sum
//Last Changed:4-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll count_factor(ll x){
    ll cnt=0;
    for (int  i = 1; i*i <=x; i++)
    {
        if(x%i==0){
            int j=x/i;
            if(i==j)cnt++;
            else cnt+=2;
        }
    }
    return cnt;
}

void solve(){ 
    ll n,q,k; cin>>n>>q>>k;
    vector<ll>a(n);
    vector<ll>pref(n+1,0);

    ll count=0;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        if(count_factor(a[i])==k){
            count+=1;
            pref[i+1]=count;
        }else pref[i+1]=count;
    } 

    int l,r; 
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