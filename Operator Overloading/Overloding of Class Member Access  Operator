#include <iostream>  
using namespace std;  
class Marks{  
    int marks;  
     public :  
         Marks(int m){  
           cout<<" constructor is called "<<endl;  
            marks = m;   
         }  
        void WhatsYoursMarks(){  
            cout<<"hey i got "<<marks<<"marks"<<endl;  
}
Marks *operator-> (){  
            cout<<" operator function is called "<<endl;  
             return this;  
       }  
};  
int main()  
{  
    Marks aman(100);                   // contructor call   
    aman.WhatsYoursMarks();  
    aman->WhatsYoursMarks();  
return 0;  
}  
