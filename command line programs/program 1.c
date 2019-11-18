#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int arg, char *argv[])   //  command line arguments
{
    int argc;
    if(argc!=3)
    {
        cout<<"expected 3 Argument at run time "<<endl;
        return 1;
    }
    cout<<"arg-1 (program name) :"<<argv[0]<<endl;
    cout<<"arg-2 :"<<argv[1]<<endl;
    cout<<"arg-3 :"<<argv[2]<<endl;
    int a= atoi(argv[1]);
    int b= atoi(argv[2]);
    cout<<"sum ="<<(a+b)<<endl;

    return 0;
}
