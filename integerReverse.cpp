#include<iostream>

using namespace std;

int reverseNumber(int num)
{
    int rem;
    int reverse=0;
    while(num!=0)
    {
        rem=num%10;
        reverse=reverse*10+rem;
        num/=10;

    }

    return reverse;


}


int main()
{ 
    int n=89365;
    cout<<reverseNumber(n);



    return 0;
}