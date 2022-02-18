#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>tmp;
    vector<int>c;
    int n;
    cin>>n;
    while(n-->0)
    {
        string str,str1;
        cin>>str>>str1;
        int a=stoi(str);
        int b=stoi(str1);
        int c=a+b;
        tmp.push_back(c);
        v.push_back(c);
        reverse(v.begin(),v.end());
        if(v==tmp)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}