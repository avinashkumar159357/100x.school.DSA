//File name:Factors of All Numbers
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:Number Theory(A)
//Description:Factors
//Last Changed:25-07-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void factors(int k){
    vector<int>a;
    for (int i = 1; i*i <=k; i++)
    {
        if(k%i==0){
            cout<<i<<" ";
            if(i!=(k/i))a.push_back(k/i);
        }
    }
    for (int i = a.size()-1; i >=0; i--) cout<<a[i]<<" ";
}
void solve(){
    int n; cin>>n;

    for (int i = 1; i <= n; i++)
    {
        factors(i);
        cout<<"\n";
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