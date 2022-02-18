#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1;
    cin>>str;
    cin>>str1;
    string sum1,sum2;
    for(auto u:str)
    {
        char c=tolower(u);
        sum1+=c;
    }
    for(auto u:str1)
    {
        char c=tolower(u);
        sum2+=c;
    }
    if(sum1>sum2) cout<<"1";
    else if(sum1==sum2) cout<<"0";
    else cout<<"-1";
}