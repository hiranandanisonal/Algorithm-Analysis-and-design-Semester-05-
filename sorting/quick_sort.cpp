//Quick sort

#include<iostream>
using namespace std;
#include<conio.h>


void swap(int &a,int &b)
{
     int temp;
     temp=a;
     a=b;
     b=temp;
}


int partition(int *a,int l,int r)
{
     int i,j;
     i=l-1;
     int pivot=a[r];
     
     for(j=l;j<=r-1;j++)
     {
                       if(a[j]<=pivot)
                       {
                                     i++;
                                     swap(a[i],a[j]);
                       }
     }
     swap(a[i+1],a[r]);
     return i+1;
}




void quicksort(int *a,int l,int r)
{
     if(l<r)
     {
            int pi=partition(a,l,r);
            quicksort(a,l,pi-1);
            quicksort(a,pi+1,r);
     }
 }


int main()
{
    int a[10],n;
    cout<<"Enter array index"<<endl;
    cin>>n;
    
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
            cin>>a[i];
    
    quicksort(a,0,n-1);
    
    //After sorting
    cout<<"After sorting"<<endl;
    for(int i=0;i<n;i++)
            cout<<a[i];
    
    getch();
    return 0;
}
