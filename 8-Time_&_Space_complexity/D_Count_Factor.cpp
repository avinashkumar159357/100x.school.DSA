//File name:Count Factors
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Time and space complexity (D)
//Description:practicing to write code with constraint on time and space
//Last Changed:1-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){  1<=N<=10^12
    ll n; cin>>n;
    ll count =0;

    for (ll i = 1; i*i <= n; i++)
    {
        if(n%i==0){
            ll j=n/i;
            if(i==j)count+=1;
            else count+=2;
        }
    }
    cout<<count;
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    ll q=1; // cin>>q;
    while (q--)
    {
        solve();
    }
    
}