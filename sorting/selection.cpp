// selection sort



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

int main()
{
    int a[10],n,i,j;
    cout<<"Enter no of elements"<<endl;
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(i=0;i<=n-1;i++)
    cin>>a[i];
    
    //selection logic
    for(i=0;i<n-1;i++)
    {
         int smallest=i;
         for(j=i+1;j<n;j++)
         {
                        if(a[j]<a[smallest])
                        smallest=j;   
         }
         swap(a[smallest],a[i]);
    }
    
    for(i=0;i<=n-1;i++)
    cout<<a[i];
        
    
    
    getch();
    return 0;
}
