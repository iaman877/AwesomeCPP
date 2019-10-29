#include <iostream> 
#include <string> 
using namespace std; 
class person  
{ 
    protected : 
      string name; 
    public : 
      void setname(string iname) 
      { 
         name = iname; 
      } 
}; 
class student : protected person 
{ 
  public : 
   void display () 
   { 
       cout<< name<<endl; 
   } 
   void setStudentName(string iname) 
   { 
       setname(iname); 
   } 
}; 
int main() 
{ 
   student aman; 
   aman.setStudentName("Aman BHardwaj"); 
   aman.display(); 
} 
