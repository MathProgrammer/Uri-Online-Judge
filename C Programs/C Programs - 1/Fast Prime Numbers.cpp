#include <cstdio>

int is_Prime(int n)
{
    for(int i = 2; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int no_of_numbers;
    scanf("%d", &no_of_numbers);

    while(no_of_numbers--)
    {
        int number_i;
        scanf("%d", &number_i);
        printf(is_Prime(number_i) ? "Prime\n" : "Not Prime\n");
    }

    return 0;
}
