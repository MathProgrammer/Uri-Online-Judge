#include <cstdio>

#define min(a, b) (a < b ? a : b)
#define max(a, b) (a > b ? a : b)
#define min_3(a, b, c) min(a, min(b, c))
#define max_3(a, b, c) max(a, max(b,c))
#define gcd_3(a, b, c) gcd(a, gcd(b, c))

int gcd(int a, int b)
{
	if(a == 0 || b == 0)
		return (a + b);
	else
		return gcd(min(a, b), max(a, b)%min(a, b));
}

int main()
{
	int side_a, side_b, side_c;

	while(scanf("%d %d %d", &side_a, &side_b, &side_c) != EOF)
	{
		int c = max_3(side_a, side_b, side_c);
		int a = min_3(side_a, side_b, side_c);
		int b = (side_a + side_b + side_c) - (a + c);

		if(c*c ==a*a + b*b)
		{
			printf(gcd_3(a, b, c) == 1 ? "tripla pitagorica primitiva\n" : "tripla pitagorica\n");
		}
		else
		{
			printf("tripla\n");
		}
	}
	return 0;
}
