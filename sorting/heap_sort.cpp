// heap sort
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


void heapify(int *a,int n,int i)
{
     int l=2*i+1;
     int r=2*i+2;
     int largest=i;
     if(l<n && a[l]>a[largest])
     largest=l;
     
     if(r<n && a[r]>a[largest])
     largest=r;
     
     if(largest!=i)
     {
                   swap(a[largest],a[i]);
                   heapify(a,n,largest);
     }     
}

void heap_sort(int *a,int n)
{
     for(int i=n/2-1;i>=0;i--)
     heapify(a,n,i);
     
     for(int i=n-1;i>=0;i--)
     {
             swap(a[0],a[i]);
             heapify(a,i,0);
     }
}


int main()
{
    int a[10],n;
    cout<<"Enter no of array elements"<<endl;
    cin>>n;
    
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    heap_sort(a,n);
    
    
    // after sort
    cout<<"After sorting"<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i];
    
    getch();
    return 0;
}
