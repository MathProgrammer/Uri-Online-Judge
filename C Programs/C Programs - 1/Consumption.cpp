#include <cstdio>

int main()
{
    int total_distance;
    double total_fuel;
    scanf("%d %lf", &total_distance, &total_fuel);

    double average_consumption = total_distance/total_fuel;
    printf("%.3lf km/l\n", average_consumption);

    return 0;
}
