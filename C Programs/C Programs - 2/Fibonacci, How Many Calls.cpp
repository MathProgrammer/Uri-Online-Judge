#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    const int max_terms = 39;

    vector <int> fibonacci(max_terms + 1);
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for(int i = 2; i <= max_terms; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    vector <int> no_of_calls_for_term(max_terms + 1);
    no_of_calls_for_term[0] = no_of_calls_for_term[1] = 0; //Base Cases
    for(int i = 2; i <= max_terms; i++)
    {
        no_of_calls_for_term[i] = 2 + no_of_calls_for_term[i - 1] + no_of_calls_for_term[i - 2];
    }

    int no_of_test_cases;
    scanf("%d", &no_of_test_cases);

    while(no_of_test_cases--)
    {
        int term_i;
        scanf("%d", &term_i);

        printf("fib(%d) = %d calls = %d\n", term_i, no_of_calls_for_term[term_i], fibonacci[term_i]);
    }

    return 0;
}
