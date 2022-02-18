#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int n,k,t;
    cin>>n;
    int sum=0;
    while(n-->0)
    {
        cin>>k;
        while(k!=0)
        {
            t=k%10;
            sum=sum+t;
            k=k/10;
        }
        cout<<sum<<endl;
        sum=0;
    }
    
}