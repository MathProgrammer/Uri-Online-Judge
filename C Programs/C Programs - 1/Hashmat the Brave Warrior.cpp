#include <cstdio>

#define abs(x) ((x) > 0 ? (x) : -(x))

int main()
{
	long long hashmat_soldiers, opponent_soldiers;

	while(scanf("%lld %lld", &hashmat_soldiers, &opponent_soldiers)!= EOF)
	{
		printf("%lld\n", abs(hashmat_soldiers - opponent_soldiers));
	}
	return 0;
}
