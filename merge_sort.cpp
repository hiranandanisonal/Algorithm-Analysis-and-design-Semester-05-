//merge sort

#include<iostream>
using namespace std;
#include<conio.h>

void merge(int *a,int l,int m,int r)
{
     int n1=m-l+1;
     int n2=r-m;
     
     int l1[n1];
     int r1[n2];
     
     for(int i=0;i<n1;i++)
     l1[i]=a[l+i];
     
     for(int j=0;j<n2;j++)
     r1[j]=a[m+j+1];
     
     
     int i=0;
     int j=0;
     int k=l;
     
     while(i<n1 && j<n2)
     {
                if(l1[i]<r1[j])
                {
                      a[k]=l1[i];  
                      i++;      
                }
                else
                {
                      a[k]=r1[j]; 
                      j++;
                }
                       k++;           
                   
     }
     
     while(i<n1)
     {
                a[k]=l1[i];
                k++;
                i++;
     }
     
     while(j<n2)
     {
               a[k]=r1[j];
                k++;
                j++; 
     }
     
     
}

void merge_sort(int *a,int l,int r)
{
     if(l<r)
     {
            int m=(l+r)/2;
            merge_sort(a,l,m);
            merge_sort(a,m+1,r);
            merge(a,l,m,r);
     }
}



int main()
{
    int a[10],n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    
    merge_sort(a,0,n-1);
    
    
    
    cout<<"After sorting"<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i];
    getch();
    return 0;
}
