#include<bits/stdc++.h>
using namespace std;
//#define int long long
/*void solve(){     // this approach using frequency array is much more faster 
    int n; cin>>n;  //than boolean array, this took 46 ms
    int freq[1000]={0};
    vector<long long>a(n);
    
    for(int i=0; i<n; i++) {
        cin>>a[i];
        freq[a[i]]++;
    }
    for (int  i = 0; i < n; i++)
    {
        if (freq[a[i]]==2) {cout<<a[i]; break;}
    }
    cout<<"\n";
    
} */    
void solve(){             //this appraocah took 62ms ,both are good approach 
    int n; cin>>n;        //i am just trying so many approach to build my foundation  stronger
   vector<bool> seen(1001, false);
    vector<long long>a(n);
    
    for(int i=0; i<n; i++) cin>>a[i];

    for (int  i = 0; i < n; i++)
    {
        if (!seen[a[i]]){
            seen[a[i]]=true;   
        }else cout<<a[i]; 
    }
    cout<<"\n";
    
}     
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}    

 