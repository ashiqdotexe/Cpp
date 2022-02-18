#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string s;
        cin>>s;
        if(next_permutation(s.begin(),s.end()))
        {
            cout<<s<<endl;
        }
        else cout<<"no answer"<<endl;
    }
}