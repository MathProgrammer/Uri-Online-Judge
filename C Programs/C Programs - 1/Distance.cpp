#include <cstdio>

int main()
{
    const int no_of_minutes_for_one_kilometer = 2;
    int no_of_kilometers;
    scanf("%d", &no_of_kilometers);

    int no_of_minutes = no_of_kilometers*no_of_minutes_for_one_kilometer;
    printf("%d minutos\n", no_of_minutes);

    return 0;
}
