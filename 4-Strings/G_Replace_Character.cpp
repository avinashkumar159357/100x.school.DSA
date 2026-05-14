//File name:Replace Character
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:String(G)
//Description:getting familiar with string
//Last Changed:14-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin>>s;
    char c1,c2; cin>>c1>>c2;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]==c1) s[i]=c2;
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