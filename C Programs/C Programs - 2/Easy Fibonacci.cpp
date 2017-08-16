#include <cstdio>

int main()
{
    long long term_1 = 0, term_2 = 1, term_3;
    int n;
    scanf("%d", &n);

    if(n == 1)
        printf("%lld", term_1);
    else
    {
        printf("%lld %lld", term_1, term_2);

        for(int term_i = 3; term_i <= n; term_i++)
        {
            term_3 = term_1 + term_2;
            printf(" %lld", term_3);

            term_1 = term_2;
            term_2 = term_3;
        }
    }

    printf("\n");
    return 0;
}
