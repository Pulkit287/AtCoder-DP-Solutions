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
    ll N,i,j,k,W;
    cin>>N>>W;
    ll w[N],v[N];
    for(i=0;i<N;i++)
    {
        cin>>w[i]>>v[i];
    }
    ll dp[W+1][N+1];
    for(i=0;i<=W;i++)
    {
        for(j=0;j<=N;j++)
        {
            if(i==0||j==0)
            dp[i][j]=0;
            else if(w[j-1]<=i)
            {
                dp[i][j]=max(v[j-1]+dp[i-w[j-1]][j-1],dp[i][j-1]);
            }
            else
            {
                dp[i][j]=dp[i][j-1];
            }
        }
    }
    cout<<dp[W][N]<<endl;
    return 0;
   
}
