#include <iostream> 
#include <string> 
using namespace std; 
class person  
{ 
    protected : 
      string name;        // name is  not avaialiblie ouside base& derived class 
    public : 
      void setname(string iname) 
      { 
         name = iname; 
      } 
}; 
class student : public person 
{ 
  public : 
   void display () 
   { 
       cout<< name<<endl; 
   } 
}; 
int main() 
{ 
      student aman; 
      aman.name = “pawan”;            //  we will get a error 
      aman.setname("Kabir Singh"); 
      aman.display(); 
} 
