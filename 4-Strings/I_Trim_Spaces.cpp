//File name:Trim Spaces
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:String(I)
//Description:getting familiar with string
//Last Changed:14-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s,s1; getline(cin,s);
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]==' ')continue;
        else s1+=s[i];
    }
   //s.erase(remove(s.begin(),s.end(),' '),s.end());
    cout<<s1;
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;  // cin>>t;
    while(t--) {
        solve();
    }

}