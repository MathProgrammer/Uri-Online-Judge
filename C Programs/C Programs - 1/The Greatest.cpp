#include <cstdio>

#define max(a, b) (a > b ? a : b)
#define max_3(a, b, c) max(a, max(b, c))

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d eh o maior\n", max_3(a, b, c));
    return 0;
}
