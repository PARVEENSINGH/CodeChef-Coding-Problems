#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
	int t;
    cin>>t;

    while(t--)
    {
        int day;
        cin>>day;
        string m;
        cin>>m;

        vector<string> month={"january","february","march","april","may","june","july","august","september",
        "october","november","december"};
        vector<int> days={31,29,31,30,31,30,31,31,30,31,30,31};
                       
       
        int  i=0;

        for(i=0;i<12;i++)
            if(month[i]==m)
                break;

       int mid_bday=day;
       int res=0;

       while(res<183)
       {
           res++;
           mid_bday++;

           if(mid_bday>days[i])
           {
               mid_bday=1;
               i++;
               i%=12;
           }
       }
   
     cout<<mid_bday<<" "<<month[i]<<endl;   
    }
}
