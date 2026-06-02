//File name:Count Primes
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Time and space complexity (F)
//Description:practicing to write code with constraint on time and space
//Last Changed:2-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool ISprime(ll n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;

    for (ll i = 3; i*i <=n; i+=2){
        if(n%i==0)return false;
    }
    return true;
}
void solve(){  //1<=N<=10^12
    ll n; cin>>n;
    int count=0;
    for (int i = 1; i <=n; i++)
    {
        if(ISprime(i))count++;
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