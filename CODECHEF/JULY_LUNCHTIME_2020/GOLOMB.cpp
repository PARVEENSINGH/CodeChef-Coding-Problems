// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define MOD 1000000007
// #define MAX 255

// // dp[i] = 1 + dp[i - dp[dp[i - 1]]]; 
// vector<ll> generateGolomb(ll n)
// {
//     ll temp;
//     vector<ll> golomb;

//     golomb.insert(golomb.begin()+1, 1);

//     for(ll i=2;i<=n;i++)
//     {
//        // temp=(1+golomb[i-golomb[golomb[i-1]]])%MOD;
//         temp=(golomb[i - golomb[golomb[i - 1]]])%MOD;
//         golomb.push_back(temp);
//     }
//     return golomb;
// }
// ll CalculatePower(ll a)
// {
//     return ((a%MOD)*(a%MOD))%MOD;
// }
// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	   ll l,r;
//        cin>>l>>r;
//        ll n=r-l+1;

//        vector<ll> res=generateGolomb(r);
//        ll sum=0;
//        for(ll i=l;i<r;i++)
//        {
//            sum+=CalculatePower(res[i]);
//            sum%=MOD;
//        }
//        cout<<sum<<endl;
// 	}
// 	return 0;
// }

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define MAX 255

// dp[i] = 1 + dp[i - dp[dp[i - 1]]]; 
// vector<ll> generateGolomb(ll n)
// {
//     ll temp;
//     vector<ll> golomb;

//     golomb.insert(golomb.begin()+1, 1);

//     for(ll i=2;i<=n;i++)
//     {
//       // temp=(1+golomb[i-golomb[golomb[i-1]]])%MOD;
//         temp=(golomb[i - golomb[golomb[i - 1]]])%MOD;
//         golomb.push_back(temp);
//     }
//     return golomb;
// }
ll CalculatePower(ll a)
{
    return ((a%MOD)*(a%MOD))%MOD;
}
void generateGolomb(ll l,ll n)
{
ll dp[n + 1]; 
  
    // base cases 
    dp[1] = 1; 
   // cout << dp[1] << " "; 
  
    // Finding and printing first  
    // n terms of Golomb Sequence. 
    for (ll i = 2; i <= n; i++)  
    { 
        dp[i] = 1 + dp[i - dp[dp[i - 1]]]; 
       // cout << dp[i] << " "; 
    } 
     ll sum=0;
     for(ll i=l;i<=n;i++)
       {
           sum+=CalculatePower(dp[i]);
           sum%=MOD;
       }
       cout<<sum<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   ll l,r;
       cin>>l>>r;
       ll n=r-l+1;

       generateGolomb(l,r);
      // ll sum=0;
    //   for(ll i=l;i<=r;i++)
    //   {
    //       sum+=CalculatePower(res[i]);
    //       sum%=MOD;
    //   }
       //cout<<sum<<endl;
	}
	return 0;
}
