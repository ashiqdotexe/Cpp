#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="aaba";
    string tmp=s;
    reverse(tmp.begin(),tmp.end());
    if(s==tmp) cout<<"Palindrom";
    else cout<<"Not Palindrom";
}