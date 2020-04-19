# Task
Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost.

##  Input Format

There are  lines of numeric input:
* The first line has a double, metalCost (the cost of the meal before tax and tip).
* The second line has an integer, tipPercent (the percentage of  being added as tip).
* The third line has an integer, taxPercentage (the percentage of  being added as tax).
## Output Format

Print the total meal cost, where totalCost  is the rounded integer result of the entire bill metalCost( with added tax and tip)
## Sample Input

* 12.00
* 20
* 8
##  Sample Output

* 15

```
#include <iostream>

using namespace std;

int main() {  
    int tipPercent;
    int taxPercent;
    double mealCost;
    scanf("%lf %d %d", &mealCost, &tipPercent, &taxPercent);
    // OR: cin >> mealCost >> tipPercent >> taxPercent;
    
    double tip = mealCost * tipPercent / 100;
    double tax = mealCost * taxPercent / 100;
    int totalCost = round(mealCost + tip + tax);
    
    printf("The total meal cost is %d dollars.", totalCost);
    
    return 0;
}

```
