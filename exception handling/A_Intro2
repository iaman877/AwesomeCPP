#include <iostream> 
#include <exception> 
using namespace std; 
int main() 
{ 
    int a = 10 , b = 0, c; 
    try 
    {                      // in try we place that code which might produce error  
      if(b == 0 ) 
      throw "dividw by zero error ";           // string  
      c = a/b; 
      cout<<c<<endl; 
    } 
       catch(const char *e)               // catch is used for handeling the exception, 
       {                            //const char is used here because trow takes string of character type 
         cout<<" exception occured "<<endl<<e; 
       } 
    return 0; 
} 
