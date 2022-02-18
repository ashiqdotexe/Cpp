#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    while(n-->0)
    {
        int c;
        cin>>c;
        v.push_back(c);
    }
    int i=max_element(v.begin(),v.end())-v.begin();
    cout<<i<<endl;
}