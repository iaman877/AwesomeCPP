#include <iostream> 
using namespace std; 
class Human 
 { 
 public : 
    Human() 
    { 
        cout<<"contructor called"<<endl; 
    } 
    ~Human() 
     { 
         cout<<"distructor called"; 
     } 
 }; 
int main() 
{ 
    Human *aman; 
    aman = new Human(); 
    delete aman; 
    return 0; 
} 
