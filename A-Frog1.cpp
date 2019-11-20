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
    ll n,i;
    cin>>n;
    ll h[n];
    for(i=0;i<n;i++)
    {
        cin>>h[i];
    }
   ll dp[n]={0};
   dp[0]=0;
   dp[1]=abs(h[1]-h[0]);
   for(i=2;i<n;i++)
   {
       dp[i]=min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
      // cout<<dp[i]<<endl;
   }
    cout<<dp[n-1]<<endl;
    return 0;
   
}
