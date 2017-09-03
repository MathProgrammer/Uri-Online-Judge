#include <cstdio>
#include <vector>

using namespace std;

int no_of_digits(int b)
{
	int no_of_digits = 0;
	while(b > 0)
	{
		b = b/10;
		no_of_digits++;
	}
	return no_of_digits;
}

int main()
{
	vector <long long> ten_power(10, 1);
	for(int i = 1; i < 10; i++)
		ten_power[i] = ten_power[i - 1]*10;

	int no_of_test_cases;
	scanf("%d", &no_of_test_cases);

	while(no_of_test_cases--)
	{
		int a, b;
		scanf("%d %d", &a, &b);

		printf(a%ten_power[no_of_digits(b)] == b ? "encaixa\n" : "nao encaixa\n");
	}

	return 0;
}
