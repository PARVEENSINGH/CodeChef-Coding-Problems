#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;

    while(t--)
    {
        string str;
        cin>>str;

        int hour=(str[0]-'0')*10+(str[1]-'0');
        int minutes=(str[3]-'0')*10+(str[4]-'0');
        double ans;

        hour%=12; 
        ans=abs(5.5*minutes-30*hour);
        cout<<min(ans,360-ans)<<" degree"<<endl;
    }
}
