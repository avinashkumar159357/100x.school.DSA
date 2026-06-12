//File name:Two Sum - II
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Sets and Maps (I)
//Description:Hashing
//Last Changed:11-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){   //using map
    int n; cin>>n;
    ll x; cin>>x;

    vector<ll>a(n);
    for (int i = 0; i < n; i++) cin>>a[i];

    map<ll,ll>mp;
    for (int  i = 0; i < n; i++)
    {
        ll need =x-a[i];
        if(mp.count(need)){
            cout<<mp[need]+1<<" "<<i+1;
            return;
        }
        mp[a[i]]=i;
    }
    cout<<"-1";
}
/*void solve(){   //using set
    int n; cin>>n;
    ll x ; cin>>x;
    set<ll>st;
    map<ll,int>mp;
    vector<ll>a(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
        mp[a[i]]=i;
    }
    for (int i = 0; i < n; i++)
    {
        int need =x-a[i];
        if(st.find(need)!=st.end()){
            cout<<mp[need]+1<<" "<<i+1;
            return;
        }else st.insert(a[i]);
    }
    cout<<"-1";
}
 */


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}