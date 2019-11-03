#include <iostream> 
#include <fstream> 
using namespace std; 
int main() 
{ 
    fstream file;          // file is object & fstram alows us to read and write both 
    file.open("Aman.txt",ios::in | ios::out | ios:: trunc );     // bydeafult c++ already add ist two file opening mode because of fstram 
    if(!file.is_open())    // or (!file)                         // trunc is used to creat a file if earliar it is not exist 
    { 
        cout<<"erro while opening the file"; 
    } 
    else{ 
        // read or write 
     cout<<"file opened suceesfully"; 
     file.close(); 
    } 
    return 0; 
} 
