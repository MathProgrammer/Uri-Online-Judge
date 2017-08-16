#include <cstdio>

int main()
{
    int time;
    scanf("%d", &time);

    const int no_of_seconds_in_a_minute = 60;
    const int no_of_minutes_in_an_hour = 60;
    const int no_of_seconds_in_an_hour = no_of_minutes_in_an_hour*no_of_seconds_in_a_minute;

    int hours = time/no_of_seconds_in_an_hour;
    time = time%no_of_seconds_in_an_hour;

    int minutes = time/no_of_seconds_in_a_minute;
    time = time%no_of_seconds_in_a_minute;

    int seconds = time;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
