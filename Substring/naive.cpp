//program for naive string matching...........

#include<iostream>
#include<conio.h>

using namespace std;


int count(char *array) {

    int i = 0;

    while(array[i] != NULL) {

        i++;

    }

    return i;

}


int main()
{
    
    char text[20],pattern[20];
    cout<<"Enter text"<<endl;
    cin>>text;
    cout<<"Enter pattern"<<endl;
    cin>>pattern;
   
    
    
    int i,j;
    int ct=count(text);
    
    int cp=count(pattern);
    
   
    
    
    for(i=0;i<ct-cp;i++)
    {
            for(j=0;j<cp;j++)
            {
                    if(text[i+j]!=pattern[j])
                    break;
            }  
            
            if(j==cp)
            cout<<"Pattern match at"<<i<<endl;      
    }
    
    getch();
    
    
    
    
    return 0;
}
