//File name: Balanced String
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:A
//Description:Contest-III
//Last Changed:29-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){  
    string s; cin>>s;
    int a_count=0,b_count=0;

    for(char c:s){
        if(c=='a')a_count++;
        else b_count++;
    }

    if(a_count==b_count)cout<<"YES";
    else cout<<"NO";
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;//  cin>>t;
    while(t--) {
        solve();
    }

}