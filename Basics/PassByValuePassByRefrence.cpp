//Simple differences between pass by value and pass byr efrence
#include<bits/stdc++.h>
using namespace std;
void pass_By_value(int n)//it takes only a copy of a number
{
    n++;
}
void pass_By_Refrence(int &n)//it takes the adress or the actual number and perform operation
{
    n++;
}
int main()
{
    int a,b;
    a=3;
    b=3;
    cout<<a<<" "<<b<<endl;
    pass_By_value(a);
    pass_By_Refrence(b);
    cout<<a<<" "<<b<<endl;
}