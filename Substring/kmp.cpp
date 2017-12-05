//Implementation of Knuth Morris Pratt

#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>

int main()
{
    char s[]="abcaby";
    char te[]="abxabcabcaby";
    int t[20]={0};
    
    
    
    
    //--------------------------------------------------temporary array-------------------------------------------
    int j=0;
    int i=1;
    t[0]=0;
    while(s[i]!='\0')
    {
                     if(s[j]==s[i])
                     {
                                   t[i]=j+1;
                                   i++;
                                   j++;
                     }
                     
                     else 
                     {
                          if(j==0)
                          {
                                  t[i]=0;
                                  i++;
                          }
                          else
                          {
                              j=t[j-1];
                          }
                      }
                      
                      
                      
    }
    
    
    i=0;
    while(i<6)
    {
                     cout<<"t["<<i<<"]="<<t[i]<<endl;
                     i++;
    }
    //---------------------------------------------------------------------------------------------------------------------------------------------------
    
    
    //-----------------------------------------------------Implementing the substring search----------------------------------------------------
    

    j=0;
    while(i<12)
    {
         
              
                     if(s[j]==te[i])
                     {
                                    j++;
                                    i++;
                     }
                     
                     
                     
                     
                     else
                     {
                         if(j!=0)
                         {
                         j=t[j-1];
                         if(s[j]!=te[i])
                         i++;
                         }
                         else
                         {
                             i++;
                         }
                     }
                     
                     
                     if(j==6)
                     {
                             cout<<"pattern matches at"<<i-j<<endl;
                     }
                     
          
                     
     }
    
    
    
    
    
    
    
    
    //--------------------------------------------------------------------------------------------------------------------------------------------
    
    
    
    
    
    
    getch();
    return 0;
}

