# Task
Given an integer,n , perform the following conditional actions:

* If n is odd, print Weird
* If n is even and in the inclusive range of 2 to 5, print Not Weird
* If n is even and in the inclusive range of  6 to 20, print Weird
* If n is even and greater than 20, print Not Weird

## Sample Input 0
 3
## Sample Output 0
Weird

## Sample Input 1
24

## Sample Output 1
Not Weird

```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    if(N%2 != 0)
      cout<<"Weird";
    else
    {
        if((N>2&&N<=5)||(N>20))
          cout<<"Not Weird";
        if(N>6&&N<=20)
          cout<<"Weird";
    }
 //   cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return 0;
}

```
