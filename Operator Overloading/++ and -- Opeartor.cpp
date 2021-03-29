#include <iostream> 
using namespace std; 
class Marks 
{ 
    int marks ; 
    public : 
     Marks(){         //  default  contructor  
         marks = 0; 
     } 
     Marks(int m){          // user defined consteuctor 
         marks = m; 
     } 
     void yourMarksplease () {         //public method which print the value stored in variable marks  
         cout<<"your marks is "<<marks<<endl; 
     } 
     void operator++(){        // retuen type + operator + sign + ()  , here we not passing any value becuse ++ is uniary operator 
                               // current object is passed implicitely 
      marks += 1; 
     } 
     friend void operator--(Marks &m);           // definition of the friend function  
}; 
void operator--(Marks &m){                       // m is object  
    m.marks -= 1; 
} 
int main() 
{ 
    Marks aman(100); 
    aman.yourMarksplease();        //due to  void datatype we can’t call this method directly here. 
    ++aman; 
    aman.yourMarksplease(); 
    --aman; 
    aman.yourMarksplease(); 
    return 0; 
} 
