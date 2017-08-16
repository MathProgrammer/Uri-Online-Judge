#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 2; i <= 1000; i += n)
        printf("%d\n", i);

    return 0;
}
