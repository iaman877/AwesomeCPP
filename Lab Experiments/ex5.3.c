/*--------------------------- -------Add two matrices by overloading binary operator +  -----------------------------  */
#include <iostream> 
using namespace std; 
class Matrix 
{ 
    int a[2][2]; 
    public : 
    void get() 
     { 
         cout<<"Enter the four element of matrix "<<endl; 
         for(int r=0;r<2;r++) 
          for(int c=0;c<2;c++) 
            cin>>a[r][c]; 
     } 
     void operator +(Matrix obj) 
      { 
          int sum[2][2]; 
          for(int r=0;r<2;r++) 
          for(int c=0;c<2;c++) 
           sum[r][c] = a[r][c] + obj.a[r][c]; 
           cout<<"sum of two matrices "<<endl; 
          for(int r=0;r<2;r++) 
           for(int c=0;c<2;c++) 
         cout<<sum[r][c]<<"\t"; 
          cout<<endl; 
      } 
}; 
int main() 
{ 
    Matrix obj1, obj2; 
    obj1.get(); 
    obj2.get(); 
    obj1+obj2; 
    return 0; 
}
