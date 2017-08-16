#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    for(int odd_i = 1; odd_i <= n; odd_i += 2)
        printf("%d\n", odd_i);

    return 0;
}
