#include <cstdio>

int main()
{
    int code_1, code_2, quantity_1, quantity_2;
    double price_1, price_2;
    scanf("%d %d %lf", &code_1, &quantity_1, &price_1);
    scanf("%d %d %lf", &code_2, &quantity_2, &price_2);

    double amount = quantity_1*price_1 + quantity_2*price_2;
    printf("VALOR A PAGAR: R$ %.2lf\n", amount);

    return 0;
}
