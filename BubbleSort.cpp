#include<iostream>
using namespace std;

void bubbleSort(int array[],int size)
{
    for(int step=0;step<size;step++)//for accessing every element in array
    {
        for(int i=0;i<size-step;i++)//comparing two adjacent elements
        {
            if(array[i]>array[i+1])//swapping two elemnts
            {
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
    }
}
void print(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int data[]={7,56,34,12,86};
    int size=sizeof(data)/sizeof(data[0]);
    bubbleSort(data,size);
    cout<<"After Sorting:"<<endl;
    print(data,size);
}
