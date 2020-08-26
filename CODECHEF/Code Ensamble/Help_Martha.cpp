#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// void buildstring(int a,int b,char c,string &res)
// {
//     int temp=b-a;
//     while(temp)
//     {
//       res+=c;
//       temp--;
//     }
// }

//USE of FAST IO
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  string str;
      cin>>str;
      int cntR=0,cntL=0,cntU=0,cntD=0;

      for(int i=0;i<str.length();i++)
      {
          switch(str[i])
          {
              case 'U': cntU++;
                        break;
              case 'D': cntD++; 
                        break;
              case 'R': cntR++;
                        break;
              case 'L': cntL++;
                        break;                             
          }
      }
      
      int x1,y1;
      cin>>x1>>y1;

      int q;
      cin>>q;
     int tempx,tempy;
     string res="";
     bool not_possible=false;
      while(q--)
      {
          int x,y;
          cin>>x>>y;
          tempx=x-x1;
          tempy=y-y1;  
         
          if(tempx>=0)
          {
            if(tempy>=0)  
                 not_possible=tempx<=cntR && tempy<=cntU;
            else
                not_possible=tempx<=cntR && -tempy<=cntD;    
          }
        else
        {
              if(tempy>=0)
                not_possible= -tempx<=cntL && tempy<=cntU;
              else
                not_possible= -tempx<=cntL && -tempy<=cntD;
          
        }
      
         if(not_possible)
            cout<<"YES"<<" "<<abs(tempx)+abs(tempy)<<endl; 
         else
            cout<<"NO"<<endl;
            
     }
    
	}
	return 0;
}