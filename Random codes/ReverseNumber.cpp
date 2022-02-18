#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int n,rem,rev=0;
    cin>>n;
    while(n-->0)
    {
        int x;
        cin>>x;
        while(x!=0)
        {
            rem=x%10;
            rev=rev*10+rem;
            n=n/10;
        }
        cout<<rev;
        rev=0;
    }
}
