#include <cstdio>

int main()
{
    int code, no_of_hours;
    double hourly_rate;
    scanf("%d %d %lf", &code, &no_of_hours, &hourly_rate);

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", code, no_of_hours*hourly_rate);
    return 0;
}
