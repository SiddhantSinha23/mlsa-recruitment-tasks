#include <iostream>          //Including necessary Header files


using namespace std;

int main()
{                               //Declaring the needed variables
    int x,y,z;                
    
    cout<<"Enter the values(in the mentioned order with spaces between them) \n1.Distance b/w Petrol Pumps.\n2.Distance already travelled.\n3.Distance which can be travelled.\nInput-";
    
    scanf("%i %i %i",&x,&y,&z);                  //Accepting the needed input in a certain format
    
    if(z>(x-y%x))               //Calculating whether the next petrol pump could be reached
    
       cout<<"Output-YES";
       
    else
                                //Providing the required output
       cout<<"Output-NO";
    
    return 0;
}
