#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    vector <long long> fibonacci(60 + 1, 0);
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i = 2; i <= 60; i++)
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

    int no_of_test_cases;
    scanf("%d", &no_of_test_cases);

    while(no_of_test_cases--)
    {
        int term_no;
        scanf("%d", &term_no);
        printf("Fib(%d) = %lld\n", term_no, fibonacci[term_no]);
    }

    return 0;
}
