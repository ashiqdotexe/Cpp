#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Iterator:: 
    vector<int>v={1,2,3,4,5,6};
    /*vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" "; // Have to use pointer to print
    }*/
    //For each loop:: 
    for(auto x:v)
    {
        cout<<x<<" ";
    }
}