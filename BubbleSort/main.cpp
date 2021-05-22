#include <iostream>

using namespace std;

void swapping(int b[],int j)
{
    int temp=b[j];
    b[j]=b[j+1];
    b[j+1]=temp;
}

void printArray(int b[], int a)
{
    cout<<"Array Elements are :"<<endl;
    for(int i=0; i<a; i++)
    {
        cout<<b[i]<<" ";
    }
}

void BubbleSort(int b[], int a)
{
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a-i-1; j++)
        {
            if(b[j]>b[j+1])
            {
                swapping(b,j);
            }
        }
    }
}

int main()
{
    cout<<"Enter the size of array you want"<<endl;
    int a;
    cin>>a;
    cout<<"Enter the elements for array"<<endl;
    int b[a];
    for(int i=0; i<a; i++)
    {
        cout<<"Enter the element for index : "<<i+1<<endl;
        cin>>b[i];
    }
    printArray(b,a);
    cout<<endl;
    BubbleSort(b,a);
    printArray(b,a);
    cout<<endl;
}
