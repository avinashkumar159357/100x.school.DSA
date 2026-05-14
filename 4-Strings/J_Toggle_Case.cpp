//File name:Toggle Case
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:String(J)
//Description:getting familiar with string
//Last Changed:14-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]<='z' && s[i]>='a') s[i]-=32;
        else if(s[i]<='Z' && s[i]>='A') s[i]+=32;
    }
    cout<<s;
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;  // cin>>t;
    while(t--) {
        solve();
    }

}