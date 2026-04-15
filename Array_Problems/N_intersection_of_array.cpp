#include<bits/stdc++.h>
using namespace std;    /// note : this question cannot be solved with boolean array as duplicates in intersection are also required
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n,x; cin>>n;

    vector<int> a(n);
    int freq[1001]={0}; // if constraints are large like >1000
                        //then use unordered_map<int,int> freq;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m;
    cin>>m;
    vector<int> b(m);
    for(int i = 0; i < m; i++) {
        cin >>b[i];
        freq[b[i]]++;  //frequency array just stores the value and its frequencies
    }                   //irrespective of which array it belongs to .
    for (int  i = 0; i < n; i++)
    {
        if (freq[a[i]]>0) // when frequency sees value==a[i](that means intersection of both the array) 
        {                 // and is greater than 0
            cout<<a[i]<<" ";
            freq[a[i]]--;//here if the frequency is 1(one occurence of value) it will become 0 and next time it will not print
        }               // and if the frequency is more, it will reduce one of its occurence
    }
    cout<<"\n";

}
int main() {
    fastio;
    int TC; cin>>TC;
    while(TC--) {
        solve();
    }

}    

 