#include <iostream>
using namespace std;
class Complex{
    int a,b;
    public :
     void get()
      {
        cin>>a,b;
      }
    void operator +(Complex obj)
     {
         cout<<"Sum = "<<(a+obj.a)<<" + "<<(b+obj.b)<<"i"<<endl;
     }
};
int main()
{
    Complex obj1,obj2;              // two complex number
    obj1.get();                      // a = 10 , b= 20 ......... 10+20i
    obj2.get();                      // a =100 , b = 200 ........100+200i
    obj1+obj2;                     // operator overloding
    return 0;
}
