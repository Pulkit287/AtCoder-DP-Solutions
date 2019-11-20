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
    cin>>n>>k;
    ll h[n];
    for(i=0;i<n;i++)
    {
        cin>>h[i];
    }
   ll dp[n];
   for(i=0;i<n;i++)
   {
       dp[i]=INT_MAX;
   }
   dp[0]=0;
   dp[1]=abs(h[1]-h[0]);
   for(i=2;i<n;i++)
   {
       for(j=1;j<=k;j++)
       {
        if(i-j>=0)   
       dp[i]=min(dp[i-j]+abs(h[i]-h[i-j]),dp[i]);
       }
   //cout<<dp[i]<<endl;
   }
    cout<<dp[n-1]<<endl;
    return 0;
   
}
