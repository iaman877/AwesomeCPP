/* Define a class with following member functions a.constructorto obtain side1, side2. b.void choice() to have menu driven
control to find and print the area of square, rectangle, or trianglec.int calculate(int) to compute the Area of Squared.
int calculate(int, int)to compute the Area of Rectanglee.float calculate(int, int) to compute the Area of Triangle3. */
/* ------------------------------------------------------------------------------------------------------------------ */

#include<iostream> 
#include<stdlib.h> 
using namespace std; 
class area 
{ 
    int side1, side2; 
public: 
area() 
{ 
     cout<<"Enter side 1 - "; 
     cin>>side1; 
     cout<<"Enter side 2 - "; 
     cin>>side2; 
} 
int calculate(int x) 
{ 
    return x*x; 
} 
int calculate(int x, int y) 
{ 
   return x*y; 
} 
float Calculate(int x,int y) 
{ 
   return 0.5*x*y; 
} 
void choice(); 
}; 
void area::choice() 
{ 
while(1) 
{ 
   cout<<"\n1.)Area of Square\n2.)Area of rectangle\n3.)Area of triangle\n4.)Exit\n\n"; 
   int c; 
   cin>>c; 
switch(c) 
  { 
    case 1: cout<<"\nArea of Square - "<<calculate(side1)<<endl; 
           break; 
    case 2: cout<<"\nArea of Rectangle - "<<calculate(side1,side2)<<endl; 
           break; 
    case 3: cout<<"\nArea of Triangle - "<<Calculate(side1,side2); 
           break; 
    case 4: exit(0); 
          break; 
default:cout<<"\nWrong Input!!"; 
  } 
 } 
} 
int main() 
{ 
   area a; 
   a.choice(); 
   return 0; 
} 
