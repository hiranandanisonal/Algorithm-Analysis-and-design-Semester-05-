//program for rabin karp...................

#include<iostream>
using namespace std;
#include<conio.h>


int count(int *p)
{
    
    int i=0;
    while(p[i]!=(-1))
    {
                     i++;
    }
    
    return i;
}







int main()
{
    int t[]={3,1,4,1,5,9,2,6,5,3,5},p[]={2,6};
    
    
    cout<<"Enter the key";
    
    
    
    int n=11;
    
    
    
    
    int ct=11;
    cout<<"ct"<<ct;
    int cp=2;
    cout<<"cp"<<cp;
   
    int i,j;
    //hash value for the patter to be searched
    
    int x=0;
    
    int f=1;
    
    for(int i=0;i<cp;i++)
         f=f*10;
         
         cout<<"f"<<f;
    
    
    
    
    for(j=0;j<cp;j++)
         {
                  x=x*10+p[j];        
         }
         
         
         
    int hp=x%n;
    
    
    
    
    
   
    x=0;
    for(j=0;j<cp;j++)
         {
                  x=x*10+t[j];        
         }
         
         
     
     j=0;
    
    for(i=0;i<ct-cp;i++)
    {
         
         
         if(x%n==hp)
         {
               for(j=0;j<cp;j++)
               {
                  if(t[i+j]!=p[j])
                  break;        
                   }      
                    if(j==cp)
         cout<<"pattern match occurs at"<<i<<endl;
         }
        
         
         
         
         x=x*10+t[i+cp]-t[i]*f;
         cout<<"-------------"<<x;
         
         
    }
     
     
    
    
    
    getch();
    return 0;
}
