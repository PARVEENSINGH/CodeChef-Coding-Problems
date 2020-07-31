#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX 255

string s;
string s2="berhampore";
string s3="serampore";

void  isSubstring(bool &isseram,bool &isberam)
{
    int n=s.length();
    int i;
    for( i=0;i<=n-10;i++)
    {
       
         if(s.substr(i,10)==s2)
         {
             isberam=true;
         }
         else if(s.substr(i,9)==s3)
        {
        isseram=true;
       
        }
    }
    if(!isseram)
    {
        if(s.substr(i,9)==s3)
        isseram=true;
    }

}
int main() {
	int t;
	cin>>t;
    getline(cin,s);
	while(t--)
	{
       getline(cin,s);

    transform(s.begin(),s.end(),s.begin(),::tolower);
   bool isseram=false,isberam=false;
   isSubstring(isseram,isberam);
 
    if(isseram && isberam)
        cout<<"Both"<<endl;
    else if(isberam)
        cout<<"GCETTB"<<endl;
    else if(isseram)
        cout<<"GCETTS"<<endl;
    else 
        cout<<"Others"<<endl;    
    
	}
	return 0;
}
