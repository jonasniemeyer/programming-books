#include <stdio.h>

float fahr_to_celsius(float fahr);

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        printf("%3.0f %7.1f\n", fahr, fahr_to_celsius(fahr));
        fahr += step;
    }

    return 0;
}

float fahr_to_celsius(float fahr)
{
    return (5.0/9.0) * (fahr-32);
}