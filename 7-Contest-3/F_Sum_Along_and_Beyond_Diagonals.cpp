//File name:Sum Along and Beyond Diagonals
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:F
//Description:Contest-III
//Last Changed:30-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    int n; cin>>n;
    vector<vector<ll>>a(n,vector<ll>(n));
    ll diagonal_sum_1=0,non_diagonal_sum=0,diagonal_sum_2=0,Total_sum=0;

    for (int  i =0; i<n; i++)
    {
        for (int j = 0; j < n; j++) {
            cin>>a[i][j];
            if(i==j)diagonal_sum_1+=a[i][j];//primary diagonal sum
            Total_sum+=a[i][j];
        }
    }

    // for getting the sum of the secondary diagonal
    // exception if n is odd then there is a overlapping element in
    // primary and secondary diagonal which has to be removed from total diagonal sum
    int i=0,j=n-1;
    while (i<=n && j>=0)
    {
        diagonal_sum_2+=a[i][j];//secondary diaginal sum
        i++;
        j--;
    }
    
    // Exception
    if(n%2==1)diagonal_sum_2=diagonal_sum_2-a[n/2][n/2];

    // sum of non diagonal sum 
    non_diagonal_sum=Total_sum-(diagonal_sum_1+diagonal_sum_2);

    cout<<diagonal_sum_1+diagonal_sum_2<<" "<<non_diagonal_sum;
    
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}