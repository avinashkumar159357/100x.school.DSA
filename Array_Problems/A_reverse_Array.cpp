#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<long long>a(n);

    for(int i=0; i<n;i++) cin>>a[i];

    int i=0,j=(n-1);
    while (i<j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
    }
    for(int x:a) cout<<x<<" ";
}  
/*void solve(){             Another approach but little confusing
    int n; cin>>n;
    vector<long long>a(n),b(n);

    for(int i=0; i<n;i++) cin>>a[i];

    for (int i = n-1,j=0; i >0,j<n; i--,j++) b[j]=a[i];

    for(int x:b) cout<<x<<" ";
}    */  



int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }
}