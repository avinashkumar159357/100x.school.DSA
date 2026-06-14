//File name: Balanced Substrings
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Contest 4 (F)
//Description:
//Last Changed:14-06-2026

#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n,q; cin>>n>>q;
    vector<ll>a(n),pref(n+1,0);
    string s ; cin>>s;
    unordered_set<char> st={'a','A','e','E','i','I','o','O','u','U'};

    int cnt=0;
    for (int i = 0; i < s.size(); i++){
        if(st.find(s[i])!=st.end()) cnt++;
        pref[i+1]=cnt;    
    }
    while (q--)
    {
        int l,r; cin>>l>>r;
        ll vowels_in_query=pref[r]-pref[l-1];
        ll consonant=(r-l+1)-vowels_in_query;
        if(consonant==vowels_in_query) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}
int main() {
    fastio;
    int TC=1; // cin>>TC;
    while(TC--) {solve();}
}    

    