#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int sum1=0,sum2=0,fl=1;
    while(!v.empty())
    {
        if(fl==1)
        {
            if(*v.begin()>v.back())
            {
                sum1+=*v.begin();
                v.erase(v.begin());
            }
            else
            {
                sum1+=v.back();
                v.pop_back();
            }
            fl=2;
        }
        else
        {
            if(*v.begin()>v.back())
            {
                sum2+=*v.begin();
                v.erase(v.begin());
            }
            else
            {
                sum2+=v.back();
                v.pop_back();
            }
            fl=1;
        }
    }
    cout<<sum1<<" "<<sum2<<endl;
}