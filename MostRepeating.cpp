#include<iostream>

using namespace std;


int mostOccuringElement(int array[],int size)
{
    int preViousCount=0;
    int currentCount;
    int Element=0;

    for(int i=0;i<size;i++)
    {
        currentCount=1;
        for(int j=0;j<size;j++)
        {
            if(array[i]==array[j]&&i!=j)
            {
               currentCount++;
            }
            
        }

        if(currentCount>preViousCount){
            Element=array[i];
            preViousCount=currentCount;
        }

    }

    return Element;

}

int main()
{

    int array[]={4,4,3,3,3,4,4,8,3,3,4};
    int a=mostOccuringElement(array,sizeof(array)/sizeof(array[0]));
cout<<a;


    return 0;
}