// insertion sort
#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
    int a[10],i,j,no,n;
    cout<<"Enter n";
    cin>>n;
    
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
    {
                    cin>>a[i];
    }
    
    
    //sort
    for(i=1;i<=n-1;i++)
    {
                       no=a[i];
                       j=i-1;
                       while(j>=0 && a[j]>no)
                       {
                                  a[j+1]=a[j];
                                  j--;
                       }
                       a[j+1]=no;
                                          
    }
    
    for(i=0;i<n;i++)
    {
                    cout<<a[i];
    }
    
    
    
    getch();
    return 0;
}
