#include<iostream>                                  //SELECTION SORT
using namespace std;

void selectionsort(int arr[],int n)
{
    
    for(int i=0;i<n-1;i++)
    {
       int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }

    
}
int main()
{
    int Myarr[50],n;
    cout<<"Size of Array:";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element"<<i<<":";
        cin>>Myarr[i];
    }
    cout<<"Elements:-";
    for(int i=0;i<n;i++)
    {
        cout<<Myarr[i]<<" ";
    }

    selectionsort(Myarr,n);
    cout<<"\nSorted Array:";
    for(int i=0;i<n;i++)
    {
        cout<<Myarr[i]<<" ";
    }
    
}