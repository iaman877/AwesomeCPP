#include <iostream> 
using namespace std; 
class person 
{ 
    private : 
      int age; 
      public : 
      void setAge(int iage) 
      { 
          age = iage; 
      } 
     void shownAge() 
      { 
          cout<<this->age<<endl; 
      } 
}; 
int main() 
{ 
    person aman; 
    aman.setAge(24); 
    aman.shownAge(); 
    return 0; 
} 
