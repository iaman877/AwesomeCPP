#include <iostream> 
using namespace std; 
class Human{ 
    public : 
     static int h_count;       // we can't initialize inside class & this varible will be share to all object of this class  
                               // there will only one copy of static member varible becuse it has class scope 
        Human(){ 
        h_count++; 
    } 
  void demo(){ 
      cout<<"these are "<<h_count<<" people are in the program "<<endl; 
  } 
}; 
int Human::h_count = 0;         //  syntax 
int main() 
{ 
    cout<< Human::h_count<<endl;      // we can acess satic variable without making object   output = 0 
    Human anil; 
    Human aman; 
    Human amandeep;  
    Human kamal; 
    anil.demo();                           // output = ther are 4 people in the program 
    cout<< Human::h_count<<endl;       // till now  we made 4 object so we output = 4 
    return 0; 
} 
