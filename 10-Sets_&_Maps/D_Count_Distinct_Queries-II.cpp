//File name:Count Distinct Queries -II
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Sets and Maps (D)
//Description:Hashing
//Last Changed:10-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    int q,a=0; cin>>q;
    map<ll,int>mp;
    ll x=0;
    while (q--)
    {
        cin>>a;

        if(a==1){
            cin>>x;
            mp[x]++;
        }else if(a==2){
            cin>>x;
            if(mp.count(x)){
                mp[x]--;
                if(mp[x]==0)mp.erase(x);
            }
        }else if(a==3){
            cout<<mp.size()<<"\n";
        }else {
            cin>>x;
            if(mp.find(x)!=mp.end())cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}