#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void checkPositive (int Value);
float getFloat ();

int main()
{
    float cat_1 = 0.0, cat_2 = 0.0, hyp = 0.0;
    printf("Enter first cathetus\n");
    do
    {
        cat_1 = getFloat();
        checkPositive(cat_1);
    }
    while (cat_1 <= 0);
    printf("Enter second cathetus\n");
    do
    {
        cat_2 = getFloat();
        checkPositive(cat_2);
    }
    while (cat_2 <= 0);

    hyp = sqrt(pow(cat_1,  2) + pow(cat_2, 2));
    printf("Hypotenuse is: %f\n", hyp);
    system("pause");
    return 0;
}

float getFloat ()
{
    char str[512];
    float x;

    fgets(str, sizeof(str), stdin);
    while (sscanf (str, "%f", &x) != 1)
    {
        printf("Enter correct value!\n");
        fgets(str, sizeof(str), stdin);
    }
    return x;
}

void checkPositive (int Value)
{
    if(Value <= 0)
    {
        printf("Enter correct value!\n");
    };
}
