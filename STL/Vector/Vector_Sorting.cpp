#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Non increasing sorting
    cout<<"Non increasing sorting"<<endl;
    vector<int>v={1,6,3,9,5};
    sort(v.begin(),v.end());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    //Non decreasing sort
    cout<<"Non decreasing sorting"<<endl;
    sort(v.rbegin(),v.rend());
    for(auto u:v)
    {
        cout<<u<<" ";
    }
    cout<<endl;
    v={1,6,3,9,5};
    //Reversing a vector:: 
    cout<<"Actual vector"<<endl;
    for(auto t:v)
    {
        cout<<t<<" ";
    }
    cout<<endl;
    cout<<"Reversing the vector"<<endl;
    reverse(v.begin(),v.end());
    for(auto z:v)
    {
        cout<<z<<" ";
    }
    cout<<endl;    
}