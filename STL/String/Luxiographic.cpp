#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    vector<string>v;
    string s;
    //cin.ignore();
    
    while(getline(cin,s))
    {
        
        if(s=="0") break;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    for(auto u:v) cout<<u<<endl;
}