
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 255

ll fun(string strx,string stry)
{
     string binplusx=strx+stry;
     string binplusy=stry+strx;
     ll X=stoll(binplusx, nullptr, 2);
     ll Y=stoll(binplusy, nullptr, 2);
     return abs(X-Y);
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
        cin>>n;
        ll A[n],min=INT_MIN,temp,max_ele;
        map<ll,string> binmap;
        string s;
       
       for(int i=0;i<n;i++)
       cin>>A[i];

        vector<string> vec;
      
       for(int i=0;i<n;i++)
        {
             s= bitset<64> (A[i]).to_string();
             const auto a = s.find('1');
             vec.push_back(s.substr(a));
        }

        if(n<=10)
        {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                continue;
                min=max(min,fun(vec[i],vec[j]));
          
            }
        }
        }
        else
        {
            max_ele=*max_element(A,A+n);
            s= bitset<64> (max_ele).to_string();
            const auto a = s.find('1');
            for(int i=0;i<n;i++)
            {
                min=max(min,fun(vec[i],s.substr(a)));
            }
        }
        cout<<min<<endl;

	}
	return 0;
}

