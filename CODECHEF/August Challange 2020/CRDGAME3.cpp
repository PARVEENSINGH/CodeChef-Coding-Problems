#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  ll h,p;
      cin>>h>>p;

        while(p)
        {
            h-=p;
            p=floor(p/2);
        }

        if(h>0)
        cout<<0<<endl;
        else
        cout<<1<<endl;
        
	}
	return 0;
}