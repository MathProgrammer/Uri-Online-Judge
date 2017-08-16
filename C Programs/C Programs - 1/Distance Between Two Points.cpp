#include <cstdio>
#include <cmath>

int main()
{
    double x_1, x_2, y_1, y_2;
    scanf("%lf %lf %lf %lf", &x_1, &y_1, &x_2, &y_2);

    double x_difference = x_2 - x_1;
    double y_difference = y_2 - y_1;

    double distance = sqrt(x_difference*x_difference + y_difference*y_difference);
    printf("%.4lf\n", distance);

    return 0;
}
