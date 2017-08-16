#include <cstdio>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf(b > c && d > a && c + d > a + b && c > 0 && d > 0 && a%2 == 0 ? "Valores aceitos\n" : "Valores nao aceitos\n");
    return 0;
}
