//File name:String Compression
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Mixed_Practice (F)
//Description:Practice
//Last Changed:29-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string s,Final_string; cin>>s;
    char temp=s[0];
    int count=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]==temp){
            count++;
        }else{
            Final_string+=temp;
            if(count>1) Final_string+=(count+'0');
            temp=s[i];
            count=1;
        }
    }
    Final_string+=s[s.size()-1];
    if(count>1) Final_string+=(count+'0');
            
    cout<<Final_string<<"\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    
}