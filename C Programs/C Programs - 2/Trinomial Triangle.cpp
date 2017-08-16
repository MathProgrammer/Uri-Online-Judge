#include <cstdio>

long long power(int x, int power)
{
    long long result = 1, y = x;

    while(power > 0)
    {
        if(power%2 == 1)
            result = result*y;

        y = y*y;

        power = power >> 1;
    }
    return result;
}

int main()
{
    int row_no;
    scanf("%d", &row_no);

    long long sum_of_row = power(3, row_no);
    printf("%lld\n", sum_of_row);

    return 0;
}
