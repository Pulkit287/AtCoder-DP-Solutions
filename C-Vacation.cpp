#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define mod 1000000007


    
int main()
{
    
 ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,i,j,k;
    cin>>n;
    ll h[n][3];
    ll dp[n][3];
    for(i=0;i<n;i++)
    {
        cin>>h[i][0]>>h[i][1]>>h[i][2];
        dp[i][0]=0;
        dp[i][1]=0;
        dp[i][2]=0;
    }
   
   dp[0][0]=h[0][0];
   dp[0][1]=h[0][1];
   dp[0][2]=h[0][2];
   for(i=1;i<n;i++)
   {
       dp[i][0]=h[i][0]+max(dp[i-1][1],dp[i-1][2]);
       dp[i][1]=h[i][1]+max(dp[i-1][0],dp[i-1][2]);
       dp[i][2]=h[i][2]+max(dp[i-1][1],dp[i-1][0]);       
   }
    cout<<max(max(dp[n-1][0],dp[n-1][1]),dp[n-1][2])<<endl;
    return 0;
   
}
