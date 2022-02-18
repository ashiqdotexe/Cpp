#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={5,9,3,5,5,3,8};
    //Unique vector:: 
    /*sort(v.begin(),v.end());
    int size=unique(v.begin(),v.end())-v.begin();
    for(int i=0;i<size;i++) cout<<v[i]<<" ";*/
    vector<int>::iterator it= max_element(v.begin(),v.end());
    cout<<*it<<endl;
}