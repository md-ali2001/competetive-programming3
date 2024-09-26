#include<iostream>

using namespace std;

bool checkDuplicate(int array[],int size)
{
    bool duplicate=false;
    for(int i=0;i<size;i++){
    for(int j=0;j<size;j++)

    if(array[i]==array[j] && i!=j)
    {
        return true;
    }

    
    
    }
return false;

}

int main()
{


int array[]={4,2,5,1,0};
cout<<checkDuplicate(array,5);
    
    
    return 0;
}