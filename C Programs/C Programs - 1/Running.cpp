#include <cstdio>

int main()
{
    float velocity_a, velocity_b, distance;

    while(scanf("%f %f %f", &distance, &velocity_a, &velocity_b) != EOF)
    {
        float relative_velocity = velocity_a - velocity_b;
        float time = distance/relative_velocity;

        printf(relative_velocity <= 0 ? "impossivel\n" : "%.2f\n",time);
    }
    return 0;
}
