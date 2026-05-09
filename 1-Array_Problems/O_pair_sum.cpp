//File Name:Pair_sum.cpp 
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 100.x.school.DSA->Array->O
//Description:used nested loop to iterate over all possible pair but this can be solved ushing hashmap and prefix sum O(n)
//Last Changed:16-4-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n,x,value=0,c=0; cin>>n;

    vector<int> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin>>x;
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i!=j){
                value=a[i]+a[j];
                if(value==x) c++;
            }
        }
    }
    cout<<c/2;
    cout<<"\n";

}
int main() {
    fastio;
    int TC; cin>>TC;
    while(TC--) {
        solve();
    }

}    

 