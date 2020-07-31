#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MAX 255

int main() {

	int t;
    ll x;
	cin>>t>>x;
    while(t--)
	{
	  ll n;
      cin>>n;
     
      ll s=sqrt(abs(n));
      ll diff=abs(n-(s*s));
      if(diff<=(x*n)/100)
        cout<<"yes"<<endl;
      else
        cout<<"no"<<endl;
       
	}
	return 0;
}
