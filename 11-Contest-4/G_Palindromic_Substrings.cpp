//File name: Palindromic Substrings
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Contest 4 (G)
//Description:
//Last Changed:14-06-2026

#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

bool palindromic_substring(string a,int i,int j){
    while (i<=j)
    {
        if(a[i]!=a[j]) return false;
        i++;
        j--;
    }
    return true;
}

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    vector<string>a;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(palindromic_substring(s,i,j)){
                a.push_back(s.substr(i,j-i+1));
            }
        }
    }
    
    for (auto x : a)cout<<x<<"\n";
}
int main() {
    fastio;
    int TC=1; // cin>>TC;
    while(TC--) {solve();}
}    

    