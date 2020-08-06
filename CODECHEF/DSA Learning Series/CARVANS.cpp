#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n,x,y,res=1;
        cin>>n;

        cin>>x;

        for(int i=1;i<n;i++)
        {
             cin>>y;
            if(x>=y)
            {
                res+=1;
                x=y;
            }
            
        }

        cout<<res<<endl;
    }
    return 0;
}