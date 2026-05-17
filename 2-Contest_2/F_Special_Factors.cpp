//Problem name:Special Factors
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:contest (F)
//Description:array
//Last Changed:1-05-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n; cin>>n;
    vector<int>a;
    bool flag=false;
    for (int  i = 1; i <=n; i++)
    {
        if(n%i==0){
            if((i%10==7) || (i%10==2)){
                a.push_back(i);
                flag =true;
            }
        }
    }
    
    if(flag){
        sort(a.begin(),a.end());
        for(int x:a) cout<<x<<" ";
    }
    else cout<<"-1";
}

int main() {
    fastio;
    int TC=1;// cin>>TC;
    while(TC--) {
        solve();
    }

}    

    