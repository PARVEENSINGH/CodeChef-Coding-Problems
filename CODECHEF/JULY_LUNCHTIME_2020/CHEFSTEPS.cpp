#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 255

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
        string res="";
	    cin>>n;
         ll k,A[n];
         cin>>k;
         for(int i=0;i<n;i++)
         {
         cin>>A[i];
         if(A[i]%k==0)
         res.append("1");
      
         else
        res.append("0");
         }
	    cout<<res<<endl;
	}
	return 0;
}
