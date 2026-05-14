//File name:Strong Password
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:String(K)
//Description:getting familiar with string
//Last Changed:14-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin>>s;
    int l=0,u=0,d=0,sp=0;

    if(s.size()!=10){
        cout<<"Weak";
        return;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]<='z' && s[i]>='a')l++;
        else if(s[i]<='Z' && s[i]>='A')u++;
        else if(s[i]<='9' && s[i] >='0')d++;
        else sp++;
    }
    
    if(l>=1 && u>=1 && d>=1 && sp>=1) cout<<"Strong";
    else cout<<"Weak";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;  // cin>>t;
    while(t--) {
        solve();
    }

}