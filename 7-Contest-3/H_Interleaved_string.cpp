//File name:Interleaved Strings
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:H
//Description:Contest-III
//Last Changed:30-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    string s1,s2; cin>>s1>>s2;
    int n=s1.size();
    int m=s2.size();
    int i=0,j=0;
    int max=n>m?n:m;
    while (i<n || j<m)
    {
        if(i<n){
            cout<<s1[i];
            if(n!=max)cout<<"-";
            else if(i!=n-1)cout<<"-";
        }
        if(j<m){
            cout<<s2[j];
            if(m!=max)cout<<"-";
            else if(j!=m-1)cout<<"-";
        }
        i++;
        j++;
    }
    
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}