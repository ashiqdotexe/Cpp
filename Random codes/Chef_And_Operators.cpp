#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int A,B;
    while(T-->0)
    {
        cin>>A>>B;
        if(A<B) cout<<"<"<<endl;
        else if(A>B) cout<<">"<<endl;
        else if(A==B) cout<<"="<<endl;
    }
}