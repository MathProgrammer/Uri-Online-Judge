#include <cstdio>

long long power_mod(int x, long long power, int MOD)
{
    long long result = 1, y = x;

    while(power > 0)
    {
        if(power%2 == 1)
            result = (result*y)%MOD;

        y = (y*y)%MOD;

        power = power >> 1;
    }
    return result;
}

int main()
{
    long long row_no;
    scanf("%lld", &row_no);

    const int MOD = (1 << 31) - 1;

    long long sum_of_row = power_mod(3, row_no, MOD);
    printf("%lld\n", sum_of_row);

    return 0;
}
