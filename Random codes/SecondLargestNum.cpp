#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x>y && x>z)
        {
            if(y>z)
            {
                cout<<y;
            }
            else 
            {
                cout<<z;
            }
        }
        else if(y>x && y>z)
        {
            if(x>z) 
            {
                cout<<x;
            }
            else 
            {
                cout<<z;
            }
        }
        else
        {
            if(x>y) 
            {
                cout<<x;
            }
            else 
            {
                cout<<y;
            } 
        }
    }
    getch();
}