#include <iostream>  
using namespace std;  
const int MAX = 3;  
int main()  
{  
    int var[MAX] = {10, 100, 200};  
    int *ptr[MAX];  
    for(int i=0;i<MAX;i++)  
    {  
        ptr[i] = &var[i];    // Assign the adress of integer             
    }  
    for(int i=0;i<MAX;i++)  
    {  
        cout<<*ptr[i]<<endl;  
    }  
      return 0;  
}  

 
