#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    string s,p;
      cin>>s>>p;
    
      int count[129];
      memset(count,0,sizeof(count));

      int n=s.length();
      int np=p.length();

      for(int i=0;i<n;i++)
      count[s[i]]++;

      for(int i=0;i<np;i++)
      count[p[i]]--;

      string res="";

      for(char x='a';x<p[0];x++)
      {
        for(int i=1;i<=count[x];i++)
          res+=x;
      }

      int flag=0;
      for(int i=1;i<np;i++)
      {
        //It is applied to check the 1st occurance after p[0] is less. If it's less
        //then the occurances of p[0] present in p can be appended only & rest occurances of p[0]
        //those are in s can be appended only after p. i.e. p can be appended directly.
        if(p[i]<p[0])
          break;

        //If 1st occurance after p[0] is greater than all the occurances of p[0] must be appeded before p.
        //Hence all the occurances from s appended first then p is appended.
        if(p[i]>p[0])
        {
          flag=1;
          break;
        }
      }

      if(flag==0)
         res+=p;

      for(int i=1;i<=count[p[0]];i++)
        res+=p[0];
      if(flag)
        res+=p;  

      //It is applied to append all the occurances after p[0] alphabatically.
      //e.g. if p="drjddsefehf" then loop will go r,s,t,u,v,w...........
      for(char x=p[0]+1;x<='z';x++)
      {
        for(int i=1;i<=count[x];i++)
          res+=x;
      }

      cout<<res<<endl;
	}

	return 0;
}

