//File name:Mogambo's Happy Hour
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:D
//Description:Contest-III
//Last Changed:30-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){  
    string s; cin>>s;
    if((s[0]==s[3]) && (s[1]==s[4]))cout<<"Mogambo is happy";
    else cout<<"Mogambo is sad";
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}