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
	    ll n,m,x,y,temp,res;
        cin>>n>>m>>x>>y;
        if(n==1 && m==1)
        {
            cout<<x<<endl;
            continue;
        }
        ll a=min(x,y);
        ll b=min(2*x,y);

        res=((n*m+1)/2)*a+((n*m)/2)*(b-a); /*It covers all four cases 
                                            1.x<y=> a=x  case 1: x & 2*x
                                            2.y<x=> a=y   case 2: x & y  
                                            3. 2*x<y=> b=2*x  case 3: y & y
                                            4.y<2*x=> b=y     case 4: y & 2*x is not possible as x is greater than y;*/ 

        cout<<res<<endl;

	}
	return 0;
}
