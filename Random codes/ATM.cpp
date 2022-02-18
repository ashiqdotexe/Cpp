#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    double x,y,r;
    cin>>x>>y;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);

    r=y;
    if(x<=(y-0.50) && remainder(x,5)==0)
    {
        cout<<y-x-0.50;
    }
    else{
        cout<<r;
    }
}