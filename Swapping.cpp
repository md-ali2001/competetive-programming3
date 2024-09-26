#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"enter value of a & b respectively"<<endl;
    cin>>a>>b;
    cout<<"before swapping\n";
    cout<<"a="<<a<<" b="<<b<<endl;


     a=a+b;
     b=a-b;
     a=a-b;

     cout<<"after swapping\n";
     cout<<"a="<<a<<" b="<<b<<endl;




    return 0;
}