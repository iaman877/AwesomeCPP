#include <iostream> 
#include<string> 
using namespace std; 
class Person 
 { 
     public : 
     string name; 
     int age; 
     void setname(string iname) 
     {name = iname;} 
       void setage(int iage) 
       {age = iage;} 
 }; 
 class student : public Person 
    { 
       public : 
        int id; 
        void setId(int iid) 
        {id = iid;} 
        void introduce() 
        { 
         cout<<"Hi i am  "<<name<<" amd i am "<<age<<"year old "<<endl<<" and my stdudent id is "<<id<<endl; 
        } 
    }; 
int main() 
{ 
    student aman; 
    aman.setname("Aman Bhardwaj"); 
    aman.setage(19); 
    aman.setId(1234); 
    aman.introduce(); 
    return 0; 

} 
