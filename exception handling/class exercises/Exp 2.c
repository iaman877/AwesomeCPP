#include <iostream> 
using namespace std; 
void test(int x){ 
    try{ 
        if(x>0) 
                throw x; 
        else 
                throw 'x'; 
    } 
  catch(int x) 
   { 
       cout<<"Exception code "<<x<<endl; 
   } 
   catch(char x) 
    { 
        cout<<"Exception code "<<x<<endl;  
    } 
} 
int main() 
{ 
    test(10); 
    test(0); 
    return 0; 
} 
