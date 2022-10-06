#include <iostream>
using namespace std;
void merge(int arr[],int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int L[n1],M[n2];// creating subarrays L and M
     
     for(int i=0;i<n1;i++)
     L[i]=arr[p+i];
     for(int j=0;j<n2;j++)
     M[j]=arr[q+1+j];
     
     //Maintaining current index of subarrays
     int i=0;
     int j=0;
     int k=p;
     while(i<n1&&j<n2)//picking up the greater elements from both subarrays
     {
         if(L[i]<=M[j])
         {
             arr[k]=L[i];
             i++;
         }
         else
         {
             arr[k]=M[j];
             j++;
         }
         k++;
     }
     //picking up the remaining elements(merging)
     while(i<n1)
     {
         arr[k]=L[i];
         i++;
         k++;
     }
     while(j<n2)
     {
         arr[k]=M[j];
         j++;
         k++;
     }
     
     
}
//sorting and merging the sub-arrays
void mergeSort(int arr[],int l, int r)
{
    if(l<r)
    {
        //m is the point where the arrays are divided
    
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    //merging both sorted sub-arrays
    merge(arr,l,m,r);
    
    }
    
}
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int arr[]={3,4,89,21,53,45,7,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,size-1);
    cout<<"After Sorting:"<<endl;
    print(arr,size);
   
}
