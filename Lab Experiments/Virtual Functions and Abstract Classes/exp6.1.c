/* Base class ‘Temperature’ obtains temperature value in Kelvin (k) through its parameterized constructor, convert it into 
Celsius value (c) and prints it using the virtual function calculate(). Class  ‘Temp’  inherits  class  ‘Temperature’  to  
obtain  the  temperature  value  in  Celsius  (c), converts it into Fahrenheit value (f) and prints it using the overridden 
function calculate(). */
/* -----------------------------------------------------------------------------------------------------------------  */

#include<iostream>
using namespace std;

class temperature
{
    float temp_k;
    protected:
    float temp_c,temp_f;
    public:
    temperature(float x)
    {
        temp_k=x;
        temp_c=temp_k-273;

    }
    virtual void calculate()
    {

        cout<<"\nTemp in celsius is - "<<temp_c;
    }

};
class temp:public temperature
{
    public:
    temp(float r):temperature(r)
    {
        temp_f= 1.8*temp_c+32;
    }
    void calculate()
    {
        cout<<"\nTemp in Fahrenheit is - "<<temp_f;
    }
};

int main()
{
    float x;
    cout<<"Enter temp in k - ";
    cin>>x;
    temperature a(x);
    temp b(x);
    temperature *pa=&a;
    temperature *pb=&b;
    pa->calculate();
    pb->calculate();
    return 0;
}
