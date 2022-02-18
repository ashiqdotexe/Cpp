#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n-->0)
    {
        string s;
        cin>>s;
        string str=s;
        reverse(str.begin(),str.end());
        if(s==str) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}