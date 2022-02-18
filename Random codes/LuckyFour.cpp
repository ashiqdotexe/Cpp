#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int x,rem,count=0,n;
    cin>>x;
    while(x-->0)
    {
        cin>>n;
        while(n!=0)
        {
            rem=n%10;
            n=n/10;
            if(rem==4)
            {
                count++;
            }
        }
        cout<<count<<endl;
        count=0;
    }
}