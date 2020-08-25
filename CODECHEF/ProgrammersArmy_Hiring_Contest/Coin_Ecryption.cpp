#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;


//https://www.codechef.com/PAHC2020/problems/BINCOIN

int LCS(int n,int m,int A[],int B[])
{
    int res[n+1][m+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
                res[i][j]=0;
            else if(A[i-1]==B[j-1])
                res[i][j]=res[i-1][j-1]+1;
            else
                res[i][j]=max(res[i-1][j],res[i][j-1]);
                    
        }
    }

    return res[n][m];
}

string decimalToBinary(int res)
{
    string s=bitset<64> (res).to_string();
   
    const auto loc=s.find('1');
    if(loc!=string::npos)
        return s.substr(loc);

    return "0";
}

int main() {
	int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int A[n];
        for(int i=0;i<n;i++)
            cin>>A[i];

        string a;
        cin>>a;    

        int B[m];
        for(int i=0;i<m;i++)
            cin>>B[i];

        string b;
        cin>>b;

        int index=LCS(n,m,A,B); 

        int res=a[index-1]^b[index-1];

        cout<<decimalToBinary(res)<<endl;   

    }
}
