#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,6,5,9};
    cout<<"Elements are:: "<<endl;
    for(auto a:v)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    reverse(v.rbegin(),v.rend());
    while(!v.empty())
    {
        v.pop_back();
    }
    cout<<"After deleting first elements:: "<<endl;
    for(auto u:v)
    {
        cout<<u<<" ";
    }
    cout<<endl;
}