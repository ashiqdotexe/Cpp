#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int n,r,lastDigit,num;
    cin>>n;
    while(n-->0)
    {
        cin>>num;
        lastDigit=num%10;
        while(num!=0)
        {
            r=num%10;
            num=num/10;
        }
        int firstDigit=r;
        cout<<lastDigit+firstDigit<<endl;
    }
}