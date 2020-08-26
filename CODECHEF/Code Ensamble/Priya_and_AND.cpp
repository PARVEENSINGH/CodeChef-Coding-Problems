#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  int n;
      cin>>n;

      int A[n];

    for(int i=0;i<n;i++)
        cin>>A[i];
     
      int res=0;
     for(int i=0;i<n;i++)
     {
        for(int j=i+1;j<n;j++)
        {
            if((A[i] & A[j])==A[i])
                res++;
        }
     }
      
      cout<<res<<endl;
	}
	return 0;
}