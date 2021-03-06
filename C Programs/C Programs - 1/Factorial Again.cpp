#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    const int limit = 5;
    vector <int> factorial(limit + 1, 1);
    for(int i = 1; i <= limit; i++)
    {
        factorial[i] = i*factorial[i - 1];
    }


    while(true)
    {
        int factorial_number_system;
        scanf("%d", &factorial_number_system);

        if(factorial_number_system == 0)
            break;

        int decimal_number = 0;

        for(int position = 1; factorial_number_system > 0; position++, factorial_number_system /= 10)
        {
            int digit = factorial_number_system%10;
            int digit_value = digit*factorial[position];

            decimal_number += digit_value;
        }

        printf("%d\n", decimal_number);
    }
    return 0;
}
