/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int main()
{   
    int n,k,z,d=0,c,j,i;
    char x;
    scanf("%d %d", &n, &k);
    string a;
    cin>>a;
    string b="";
    for(i=0;i<k;i++)
       {
        cin>>x;
        b+=x;
       }
    for(i=0;i<n;i++)
       { 
        for(j=i;j<n;j++)
           {
            c=0;
            for(z=0;z<k;z=z++)
               {
                if(a[j]==b[z])
                c++;
                break;
               }
            if(c==0)
            break;
           }
        d=d+(j-i);
        }
    cout<<d;    
    return 0;
}