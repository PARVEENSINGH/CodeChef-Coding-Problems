#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  ll n,k;
      cin>>n>>k;

    ll P[n];
    for(ll i=0;i<n;i++)
    cin>>P[i];

    ll res=INT64_MAX,ans=0;

    for(ll i=0;i<n;i++)
    {
        if(k%P[i]==0)
        {
            if(res>(k/P[i]))
            {
                res=(k/P[i]);
                ans=P[i];
            }
        }
        
    }

    if(res==INT64_MAX)
    cout<<-1<<endl;
    else
    cout<<ans<<endl;
    
        
	}
	return 0;
}