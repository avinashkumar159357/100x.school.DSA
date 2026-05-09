#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,i; cin>>n;
    vector<int>a(n);
    for(int i=0; i<n ;i++) cin>>a[i];
    int max_value=*max_element(a.begin(),a.end());
    int max_idx=max_element(a.begin()+i,a.end())-a.begin();

    cout<<max_value<<" "<<max_idx+1;

}

/*void solve(){    // another approach using for loop(this also gives the first occcurence of the max element)
    int n,i; cin>>n;
    vector<int>a(n);
    for(int i=0; i<n ;i++) cin>>a[i];

    int idx = 0;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] > a[idx]) {
            idx = i;
        }
    }
    cout<<a[idx]<<" "<<idx+1;
}*/

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1; // cin>>t;
    while(t--){
        solve();
    }
    
}