#include <iostream> 
#include <stdlib.h> 
using namespace std; 
int main() 
{ 
    int i,size; 
    cout<<"enter the size of the array"; 
    cin>>size; 
    int *ptr; 
    try 
    { 
        ptr = new int[size];     //dma  
        if(ptr==NULL) 
         exit(1);       //dma check 
    } 
 catch(bad_alloc obj) 
  { 
      cerr<<"exception caught "<<obj.what()<<endl; 
      exit(1); 
  } 
  cout<<"Enter the array elements "; 
  for(i=0;i<size;i++) 
  cin>>ptr[i]; 
} 
