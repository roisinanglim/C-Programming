// Include stdio package
#include <stdio.h>
// Function to add two numbers
int sum(int a,int b)
{
    // If a equals b return three time the sum else return the total of a and b
    if (a==b)
    {
        return (a+b)*3;
    } else {
        return (a + b);
    }
}

// Execute the Function
int main()  
{
    int res = sum(5,4);
    // defines res as a number once the result is returned
    printf("Result is %d\n",res);
    // Re-define res value as 3,3
    res = sum(3,3);
    // Print new res value
    printf("Result is %d\n",res);
}