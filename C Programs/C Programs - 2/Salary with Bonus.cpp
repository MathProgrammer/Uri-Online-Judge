#include <cstdio>

int main()
{
    char name[30];
    double salary, sales;
    scanf("%s %lf %lf", name, &salary, &sales);

    double total_salary = salary + 0.15*sales;
    printf("TOTAL = R$ %.2lf\n", total_salary);
    return 0;
}
