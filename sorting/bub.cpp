// bubble sort

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
    bool flag=true;
    cout<<"Enter no of elements"<<endl;
    cin>>n;
    
    cout<<"ENter array"<<endl;
    for(int i=0;i<n;i++)
    {
            cin>>a[i];
    }
    
    //sort logic
    for(i=n-2;i>=0 && flag;i--)
    {
         flag=false;                  
         for(j=0;j<=i;j++)
         {
                          if(a[j+1]<a[j])
                          swap(a[j],a[j+1]);
                          flag=true;
         }
    }
    
     for(int i=0;i<n;i++)
    {
            cout<<a[i];
    }
    
    
    
    getch();
    return 0;
}
