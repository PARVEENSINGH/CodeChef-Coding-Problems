#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;


//https://www.codechef.com/DEM2020/problems/HELPHAND

void solve(ll n)
{
    ll A[n+2],res[n+2];
    for(int i=1;i<=n;i++)
        A[i]=i;

// Implementing Sieve the Eratosthenes

    for(int i=2;i*i<=n;i++)
    {
        if(A[i])
        {
            for(int j=i*i;j<=n;j+=i)
                 A[j]=0;
        }
    }   

    // int count=0;
    // for(int i=2;i<n;i++)
    // {
    //     if(A[i])
    //         count++;

    //     res[i]=count;
    // } 
    vector<ll> ans(n+1,0);
    ans[1]=0;
    ans[2]=1;
    ans[3]=2;
    ans[4]=3;

    for(int i=5;i<=n;i++)
    ans[i]=ans[i-1]+2-(A[i]==0);

    cout<<ans[n]<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        if(n==1 )
        {
            cout<<0<<endl;
            continue;
        }

        if(n==2)
        {
            cout<<1<<endl;
            continue;
        }

        solve(n);
        
    }
    return 0;
}