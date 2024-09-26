#include<iostream>

using namespace std;


int main()
{

    string str="iamgood";
    string result="";
    for(int i=str.length()-1;i>=0;i--)
    {
        result+=str[i];
    }
    cout<<result;

    return 0;
}