#include <cstdio>

int main()
{
    int left, right;
    scanf("%d %d", &left, &right);

    left = left - 1;
    long long sum_till_left = (left*1LL*(left + 1))/2;
    long long sum_till_right = (right*1LL*(right + 1))/2;

    printf("%lld\n", sum_till_right - sum_till_left);
    return 0;
}
