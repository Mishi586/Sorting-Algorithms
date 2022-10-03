#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selectionSort(int array[],int size)
{
    for(int step=0;step<size-1;step++)
    {
        int min_idx=step;
        for(int i=step+1;i<size;i++)
        {
            if(array[i]<array[min_idx])
            min_idx=i;
            
        }
        swap(&array[min_idx],&array[step]);
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
    int data[]={2,9,56,17,4,7};
    int size=sizeof(data)/sizeof(data[0]);
    selectionSort(data,size);
    cout<<"After Sorting:";
    print(data,size);
}
