#include <cstdio>

int main()
{
    int time, average_speed;
    scanf("%d %d", &time, &average_speed);

    int distance = time*average_speed;
    double const liters_per_kilometer = 12;

    double no_of_liters_spent = distance/liters_per_kilometer;

    printf("%.3lf\n", no_of_liters_spent);
    return 0;
}
