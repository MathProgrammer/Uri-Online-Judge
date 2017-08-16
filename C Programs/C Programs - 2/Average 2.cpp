#include <cstdio>

int main()
{
    const double weight_of_A = 2.0, weight_of_B = 3.0, weight_of_C = 5.0;
    double score_in_A, score_in_B, score_in_C;
    scanf("%lf %lf %lf", &score_in_A, &score_in_B, &score_in_C);

    const double sum_of_weights = weight_of_A + weight_of_B + weight_of_C;
    double average = (weight_of_A*score_in_A + weight_of_B*score_in_B + weight_of_C*score_in_C)/sum_of_weights;

    printf("MEDIA = %.1lf\n", average);

    return 0;
}

