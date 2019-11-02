#include <iostream> 
using namespace std; 
namespace first_space 
{ 
    void fun() 
     { 
         cout<<"Inside the first sapce "<<endl; 
     } 
} 
namespace second_space 
{ 
    void fun() 
    { 
        cout<<"inside second spces "<<endl; 
    } 
} 
using namespace first_space; 
int main() 
{ 
    fun();     // it will call first fun() 
    second_space::fun(); 
    return 0; 
} 
