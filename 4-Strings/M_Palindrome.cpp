//File name:Palindrome
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:String(M)
//Description:getting familiar with string
//Last Changed:14-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin>>s;
    bool flag=true;
    int i=0,j=s.size()-1;
    while (i<=j)
    {
        if (s[i]!=s[j]){
            flag=false;
            break;
        }
        i++;
        j--;
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;  // cin>>t;
    while(t--) {
        solve();
    }

}