#include<bits/stdc++.h>
using namespace std;
//#define int long long
void solve(){     //using map
    int n; cin>>n;
    vector<long long>a(n);
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++) cin>>a[i];

    for (int i = 0; i < n; i++) mp[a[i]]++;
    
    for(auto it=mp.begin();it!=mp.end();it++) {
        if(it->second == 1) 
            cout << it->first << "\n";
    }
    
}   
/*void solve(){       //another best approach for this problem using xor
                     //because of xor properties x^x=0 and x^0=x
    int n,ans=0; cin>>n;
    vector<long long>a(n);
    
    for(int i=0; i<n; i++) cin>>a[i];

    for (int i = 0; i < n; i++) ans^=a[i];
    
    cout<<ans<<"\n";
}    */  
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}    

 