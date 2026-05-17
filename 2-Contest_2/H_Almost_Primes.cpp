//Problem name:Almost Primes
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:contest (H)
//Description:array
//Last Changed:2-05-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

bool almost_prime(int n){
    int count=0;
    for (int  j = 1; j <= n; j++) {
        if(n%j==0)count++;
    }
    if (count<=4) return true;
    else return false;
}

void solve() {
    int n; cin>>n;
    vector<int>a;
    for (int i = 1; i <= n; i++)
    {
        if(almost_prime(i)) a.push_back(i);
    }
    
    for(int x:a) cout<<x<<" ";
    
}

int main() {
    fastio;
    int TC=1;// cin>>TC;
    while(TC--) {
        solve();
    }

}    

    