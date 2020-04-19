# Task
* Complete the code in the editor below. The variables i, d, and s are already declared and initialized for you. You must:
* Declare 3 variables: one of type int, one of type double, and one of type String.
* Read 3 lines of input from stdin (according to the sequence given in the Input Format section below) and initialize your  variables.
* Use the  operator to perform the following operations:
* Print the sum of  plus your int variable on a new line.
* Print the sum of  plus your double variable to a scale of one decimal place on a new line.
* Concatenate  with the string you read as input and print the result on a new line.

## Input Format

* The first line contains an integer that you must sum with i.
* The second line contains a double that you must sum with d .
* The third line contains a string that you must concatenate with s  .

## Output Format

Print the sum of both integers on the first line, the sum of both doubles (scaled to  decimal place) on the second line, and then the two concatenated strings on the third line.

## Sample Input

* 12
* 4.0
* is the best place to learn and practice coding!

## Sample Output

* 16
* 8.0
* HackerRank is the best place to learn and practice coding!

```

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int i1;
    double d1;
    string s1;
     cin >> i1;
     cin >> d1;
     getchar();//cin.ignore();
     getline(cin,s1);
    s.append(s1);
     cout << i+i1 <<endl<<fixed<<setprecision(1)<<d+d1 <<endl <<s;
    return 0;
 }
 
 ```
