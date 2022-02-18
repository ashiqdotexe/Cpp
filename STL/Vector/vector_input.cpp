#include<bits/stdc++.h>
using namespace std;
int main()
{
    //taking input in vector
    /*vector<int>v;
    int n;
    cin>>n;
    while(n-->0)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++)
    {
        //cout<<v[i]<<" ";   
    }*/
    //Resizing vector
    vector<int> vec(10,5);//initialize index and it's value
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";//5 5 5 5 5 5 5 5 5 5::: 10 '5' will be printed
    }
}