#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    const int limit = 20;
    vector <long long> factorial_of(limit + 1, 1);
    for(int i = 1; i <= limit; i++)
    {
        factorial_of[i] = i*factorial_of[i - 1];
    }

    int m, n;
    while(scanf("%d %d", &n, &m) != EOF)
    {
        long long factorial_sum = factorial_of[n] + factorial_of[m];
        printf("%lld\n", factorial_sum);
    }

    return 0;
}
