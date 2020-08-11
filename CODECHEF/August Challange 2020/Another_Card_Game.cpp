#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  ll c,r;
      cin>>c>>r;

        int cd=c/9;
        c=c%9;
        if(c)
        cd+=1;

        int rd=r/9;
        r=r%9;
        if(r)
        rd+=1;
      
        if(cd>rd && c>=0)
        cout<<1<<" "<<rd<<endl;
        else if(cd<rd)
        cout<<0<<" "<<cd<<endl;
        else
        cout<<1<<" "<<cd<<endl;
        
        
	}
	return 0;
}