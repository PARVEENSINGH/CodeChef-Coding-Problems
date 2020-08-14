#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;


//https://www.codechef.com/DEM2020/problems/TOWIN

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n,suma=0,sumb=0;
        cin>>n;

        ll A[n];
        for(int i=0;i<n;i++)
             cin>>A[i];

      
        if(n==1)
        {
            cout<<"first"<<endl;
            continue;
        }

        if(n==2)
        {
            if(A[0]<A[1])
             cout<<"second"<<endl;
            else if(A[0]>A[1])
             cout<<"first"<<endl;
            else
              cout<<"draw"<<endl;    
              continue;   
        }

        sort(A,A+n);

        int flag=0;
        
        sumb+=A[n-2]+A[n-3];
        suma+=A[n-1];

        for(int i=n-4;i>=0;i--)
        {   
            if(flag^1)
            {
                suma+=A[i];
                flag^=1;
            }
            else if(flag^0)
            {
                sumb+=A[i];
                flag^=1;
            }
        }     
        
        if(suma>sumb)
            cout<<"first"<<endl;
        else if(sumb>suma)
            cout<<"second"<<endl;
        else
            cout<<"draw"<<endl;
        
    }
    return 0;
}