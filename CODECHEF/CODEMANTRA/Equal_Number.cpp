#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX 255

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   string w,i;
       cin>>w>>i;

        int n1=w.length();
        int n2=i.length();
        int j=n1-1,k=n2-1;

        bool flag=true;
        while(j>=0 && k>=0)
        {
            if( w[j]==',' )
            {
            j--;
            continue;
            }
            else if(i[k]==',')
            {
            k--;
            continue;
            }
            else if(w[j]==',' && i[k]==',')
            {
                j--;
                k--;
                continue;
            }
            else if(w[j]==i[k] && w[j]!=',')
            {
                j--;
                k--;
                continue;
            }
            else
            {
                flag=false;
                break;
            }
        
        }
        if(!flag)
           cout<<"different"<<endl;
        else if(flag && j<0 && k<0)
            cout<<"equal"<<endl; 
       
	}
	return 0;
}
