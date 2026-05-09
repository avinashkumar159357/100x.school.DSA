#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<long long>a(n);
    for(int i=0; i<n;i++) cin>>a[i];
        
    int min_Value=*min_element(a.begin(),a.end());//min_element is an iterator which iterates over index and with (*), it gives minimum element
    int its_Index=min_element(a.begin(),a.end())-a.begin(); //here index of minimum element - index 0
   
    cout<<min_Value<<" "<<its_Index+1;
}    
/*void solve(){             //another approach using for loop            
    int n; cin>>n; 
    vector<long long>a(n);                 
    for(int i=0; i<n;i++) cin>>a[i];      
    int idx=0;
    for (int  i = 1; i < n; i++)
    {
        if(a[i]<a[idx]){
        idx=i;
        }    
    }    
    cout<<a[idx]<<" "<<idx+1;
}    */

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }
}