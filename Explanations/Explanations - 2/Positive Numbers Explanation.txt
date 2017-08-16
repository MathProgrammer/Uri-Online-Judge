#include <cstdio>

int main()
{
    int no_of_positive_numbers = 0;
    for(int i = 1; i <= 6; i++)
    {
        double number_i;
        scanf("%lf", &number_i);

        no_of_positive_numbers += (number_i >= 0);
    }

    printf("%d valores positivos\n", no_of_positive_numbers);
    return 0;
}
