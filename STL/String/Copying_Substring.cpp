#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="";
    string r="HM Adnanur Rahman";
    r.erase(r.begin()+3,r.begin()+10);
    cout<<r<<endl;
    copy(r.begin(),r.end(),back_inserter(s));
    cout<<s<<endl;
}