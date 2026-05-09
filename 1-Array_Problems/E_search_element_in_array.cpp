#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,x; cin>>n>>x; 
    vector<long long>a(n);                
    for(int i=0; i<n;i++) cin>>a[i];
    auto it=find(a.begin(),a.end(),x);//using STL function
    if(it!=a.end()) cout<<"YES";
    else cout<<"NO"; 
}
/*void solve(){           //brute force approach using for loop              
    long long n,x; cin>>n>>x; 
    vector<long long>a(n); 
    bool flag=false;                
    for(int i=0; i<n;i++) {
        cin>>a[i];
        if(a[i]==x){
            flag=true;
            break;
        }      
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
}
*/
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }
}