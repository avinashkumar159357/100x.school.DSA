//File name: Thala For A Reason
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:B
//Description:Contest-III
//Last Changed:29-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sum_of_digits(ll n){
    ll sum=0;
    while (n>0)
    {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
void solve(){  
    ll r ; cin>>r;
    if(sum_of_digits(r)==7)cout<<"Thala for a reason\n";
    else cout<<"Blocked for no reason\n";
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) {
        solve();
    }

}