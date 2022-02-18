#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int n,k,t;
    cin>>n>>k;
    int count=0;
    while(n-->0)
    {
        cin>>t;
        if(t%k==0)
        {
            count++;
        }
    }
    cout<<count;
}