#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int x,rem,num1,num2;
    while(x-->0)
    {
        cin>>num1>>num2;
        rem=num1%num2;
        cout<<rem<<endl;
    }
}