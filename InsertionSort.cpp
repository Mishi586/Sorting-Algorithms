#include<iostream>
using namespace std;

void InsertionSort(int array[], int size)
{
    for(int step=1;step<size;step++)
    {
        int key=array[step];
        int j=step-1;
        while(key<array[j]&&j>=0)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;
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
    int data[]={45,8,9,44,7,6};
    int size=sizeof(data)/sizeof(data[0]);
    InsertionSort(data,size);
    cout<<"After Sorting:";
    print(data,size);
}
