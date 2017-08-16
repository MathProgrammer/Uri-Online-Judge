#include <cstdio>

int main()
{
    const double PI = 3.14159;
    double radius;
    scanf("%lf", &radius);

    double volume = (4*PI*radius*radius*radius)/3.0;
    printf("VOLUMNE = %.3lf\n", volume);

    return 0;
}
