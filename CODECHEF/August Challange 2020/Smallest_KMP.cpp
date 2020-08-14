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
    
      int count[129]={0};
      int n=s.length();
      int np=p.length();

      for(int i=0;i<n;i++)
      count[s[i]]++;

      for(int i=0;i<np;i++)
      count[p[i]]--;


      string res="";

      sort(s.begin(),s.end());  
       
      int i=0;
    
      while(s[i]<=p[0])
      {
    
      if( count[s[i]]>0)
      {
          res+=s[i];
          count[s[i]]--;

      }
        i++;
       //cout<<res<<" "<<count[s[i]]<<endl;
      }
       

    res+=p;

   // cout<<res<<endl;
    //   for(int i=1;i<np;i++)
    //   {
    //       res+=p[i];
    //       count[p[i]]--;
    //   }

      for(int i=96;i<123;i++)
      {
          while(count[i])
          {
             res+=i;
             count[i]--;
          }
      }

     cout<<res<<endl;

	}
	return 0;
}