#include <cstdio>

int power_mod(int x, int power, int MOD)
{
    int y = x;
    int result = 1;

    while(power > 0)
    {
        if(power%2 == 1)
            result = (result*1LL*y)%MOD;

        y = (y*1LL*y)%MOD;

        power = power >> 1;
    }
    return result;
}

int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        int no_of_1s = 0, number = 0;
        do
        {
            int current_1_value = power_mod(10, no_of_1s, n);
            number = (number + current_1_value)%n;

            no_of_1s++;

        }while(number%n != 0);

        printf("%d\n", no_of_1s);
    }

    return 0;
}
