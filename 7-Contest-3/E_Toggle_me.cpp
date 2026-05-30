//File name:Toggle Me!
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:E
//Description:Contest-III
//Last Changed:30-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){  
    string s; cin>>s;
    for(int i=0; i<s.size(); i++){
        if(isupper(s[i]))s[i]=tolower(s[i]);
        else if(islower(s[i]))s[i]=toupper(s[i]);
    }
    cout<<s;
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}