#include <stdio.h>
// Create a struct for a person to hold related variables
struct person
{
    int age;
    float weight;
};

int main()
{
    struct person *personPtr, person1;
    personPtr = &person1;
    printf("Enter age:");
    scanf("%d",&personPtr->age);
    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);
    printf("Age: %d\n", personPtr->age);
    return 0;
}