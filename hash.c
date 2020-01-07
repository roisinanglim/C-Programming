// Pulls all stdio contents into a file
#include <stdio.h>
// Function to print hash characters
void print(int times,char a)
{
    for(int i = 0; i < times; i++)
    {
        printf("%c",a);
    }
    printf("\n");

}
// Execution of the function
int main()
{
    print(6,'#');
    print(1,'#');
    print(1,'#');
    print(5,'#');
}