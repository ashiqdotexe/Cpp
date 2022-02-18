#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    while(n-->0)
    {
        int a,x;
        cin>>a>>x;
        for(int i=0;i<a;i++)
        {
            int arr;
            cin>>arr;
            v.push_back(arr);
        }
        sort(v.begin(),v.end());
        int size=unique(v.begin(),v.end())-v.begin();
        if(size==x) cout<<"Good"<<endl;
        else if(size>x) cout<<"Average"<<endl;
        else if(size<x) cout<<"Bad"<<endl;
        x=0;
    }
}