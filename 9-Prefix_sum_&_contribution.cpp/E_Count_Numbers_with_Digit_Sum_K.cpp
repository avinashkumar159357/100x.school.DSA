//File name: Count Numbers with Digit Sum K
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Array technique (E)
//Description:prefix sum
//Last Changed:4-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll digit_sum(ll x){
    ll sum=0;
    while (x>0)
    {
        int digit=x%10;
        sum+=digit;
        x/=10;
    }
    return sum;
}

void solve(){ 
    ll n,q,k; cin>>n>>q>>k;
    vector<ll>a(n);
    vector<ll>pref(n+1,0);

    ll count=0;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        if(digit_sum(a[i])==k){
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