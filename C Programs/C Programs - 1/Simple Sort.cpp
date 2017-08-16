#include <cstdio>

#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)

#define max_3(a, b, c) max(a, max(b, c))
#define min_3(a, b, c) min(a, min(b, c))

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int sorted_a, sorted_b, sorted_c;
    sorted_a = min_3(a, b, c);
    sorted_c = max_3(a, b, c);
    sorted_b = (a + b + c) - (sorted_a + sorted_c);

    printf("%d\n%d\n%d\n\n", sorted_a, sorted_b, sorted_c);
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
