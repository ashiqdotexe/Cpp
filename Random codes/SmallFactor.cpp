#include<iostream>

using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x-->0)
    {
        int n,fact=1;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<fact<<endl;
        fact=1;
    }
}