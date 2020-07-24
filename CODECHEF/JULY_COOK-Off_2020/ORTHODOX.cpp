#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,flag=0;
	    cin>>n;
	    
	    ll A[n],a;
	    vector<ll> vec;
	    for(int i=0;i<n;i++)
	    {
	    cin>>A[i];
	    a=A[i];
	    vec.push_back(a);
	    }
	    
	    int k=1,p=0;
	    a=0;
	   while(k<=n)
	   {
	        for(int j=0;j<n-k;j++)
	        {
	            while(p<=k)
	            {
	            a|=A[j+p];
	            p++;
	            }p=0;
	            
	            vec.push_back(a);
	            a=0;
	        }
	       k++;
	    }
	    
	    sort(vec.begin(),vec.end());
	    //cout<<vec.size()<<endl;
	    ll i;
	    for( i=1;i<vec.size();i++)
	    {
	        if(vec[i-1]==vec[i])
	        {
	            flag=1;
	            break;
	        }
	        //cout<<vec[i-1]<<" ";
	    }
	    //cout<<i<<" "<<vec[i]<<" ";
	   // for(int i=0;i<vec.size();i++)
	   // cout<<vec[i]<<" ";
	    if(flag)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	
	}
	return 0;
}
