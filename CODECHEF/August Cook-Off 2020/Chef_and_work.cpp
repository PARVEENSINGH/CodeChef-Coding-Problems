#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  ll n,k,a,res=0;
      cin>>n>>k;

      vector<ll> A;

      for(int i=0;i<n;i++)
      {
          cin>>a;
          A.push_back(a);
      }
      ll temp=0;  
      for(int i=0;i<n;i++)
      {
          temp+=A[i];
          if(A[i]>k)
          {
            cout<<-1<<endl;
            break;
          }

          else if(temp==k)
          {
              res++;
              temp=0;
          }
          
          else if(temp>k)
          {
              temp=0;
              res++;
              i-=1;
          }
          
      }
      if(temp!=0 && temp<=k)
        res++;  
      cout<<res<<endl;
      
	}
	return 0;
}