#include <iostream> 
using namespace std; 
class Fourside 
{ 
    int a,b,c; 
    public : 
    void get_sq() 
    { 
        cout<<"enter the side of square "; 
        cin>>a; 
        area(a); 
    } 
    void get_rec() 
    { 
        cout<<"enter the side of rectangle "; 
        cin>>b>>c; 
        area(b,c); 
    } 
 // definition with one argument (Fun. Signature-1) 
  void area(int side) 
  { 
      cout<<"\n Area of the square :"<<(side*side)<<endl; 
  } 
  //defn. with two argument (fn signature-2) 
   void area(int side1 , int side2) 
   { 
       cout<<"\n Area of rectangle :"<<side1*side2; 
   } 
}; 
int main() 
{ 
    Fourside  s,r; 
    s.get_sq(); 
    r.get_rec(); 
    return 0; 
} 
