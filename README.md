# Algorithm & Data-strucutre
Run C++ program on terminal using gcc compiler 

Step 1. Open linux terminal.

Step 2. install gcc :
$ sudo apt-get install build-essential 

Step 3. Now go to that folder where you will create C++ programs. 
$ sudo gedit hello.cpp 

Step 4. Add this code in the file:
(i). C++ program code:
#include<iostream>
using namespace std;
int main()
{
           cout<<“\n Welcome on github”<<endl;
            return 0;
}

Step 5. Save the file and exit.

Step 6. Compile the program using any of the following command
$ sudo g++ hello.cpp (or)
$ sudo g++ -o hello hello.cpp

Step 7. To run this program type this command:
$ ./a.out (If you compiled using first command)
Or
$ ./hello (If you compiled using second command)
