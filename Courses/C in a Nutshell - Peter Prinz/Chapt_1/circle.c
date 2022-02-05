#include <stdio.h>

double circularArea(double r);

int main()
{
    double radius = 1.0, area = 0.0;
    printf("\n\n");
    printf("Area of Circles\n");
    printf("Radius          Area\n");

    area = circularArea(radius);
    printf("%10.1f      %10.2f\n", radius, area);

    radius = 5.0;
    area = circularArea(radius);
    printf("%10.1f      %10.2f\n", radius, area);
    printf("\n\n");
    
    return 0;
}

double circularArea(double r)
{
    const double pi = 3.1415;
    return pi*r*r;
}