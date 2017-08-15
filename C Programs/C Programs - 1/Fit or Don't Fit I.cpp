#include <cstdio>

int find_no_of_digits_in(int n)
{
    const int base = 10;
    int no_of_digits = 0;

    while(n > 0)
    {
        n = n/base;
        no_of_digits++;
    }
    return no_of_digits;
}

int power(int x, int n)
{
    int result = 1, y = x;

    while(n > 0)
    {
        if(n%2 == 1)
            result = result*y;

        y = y*y;
        n = n >> 1;
    }
    return result;
}

int main()
{
    int no_of_test_cases;
    scanf("%d", &no_of_test_cases);

    while(no_of_test_cases--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int no_of_digits_in_b = find_no_of_digits_in(b);
        int final_digits_of_a = a%power(10, no_of_digits_in_b);

        printf(final_digits_of_a == b ? "encaixa\n" : "nao encaixa\n");
    }
    return 0;
}
