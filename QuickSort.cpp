#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int array[],int low,int high)
{
    int pivot=array[high];
    int i=(low-1);
    for(int j=low;j<high;j++)
    {
        if(array[j]<=pivot)
        {
            i++;
            swap(&array[i],&array[j]);
        }
    }
    swap(&array[i+1],&array[high]);
    return (i+1);//returning the partition point
}
void print(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void quickSort(int array[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(array,low,high);
        //recursive call on left of pivot
        quickSort(array,low,pi-1);
        //recursive call on right of pivot
        quickSort(array,pi+1,high);
    }
}
int main() {
   int data[]={12,10,7,56,40,0,9};
   int n=sizeof(data)/sizeof(data[0]);
   quickSort(data,0,n-1);
   cout<<"After Sorting:";
   print(data,n);
}
