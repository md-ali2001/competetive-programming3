#include<iostream>

using namespace std;

int greatestNumber(int array[],int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        if(array[i]>array[i+1])
        {
            temp=array[i];
            array[i]=array[i+1];
            array[i+1]=temp;
        }
        
    }

    return array[size-1];
}



int main()
{
    int array[]={5,2,7,8,6,16,1,2};
    int num=greatestNumber(array,sizeof(array)/sizeof(array[0]));
cout<<num;

    return 0;
}