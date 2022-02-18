#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    while (n-->0)
    {
        int c;
        cin>>c;
        v.push_back(c);
    }
    sort(v.begin(),v.end());
    int diff=v[1]-v[0];
    for(int i=2;i<v.size();i++)
    {
        if(v[i]-v[i-1]!=diff) cout<<"Not arithmetic"<<endl;
        else cout<<"Arithmetic"<<endl;
    }     
}