#include <cstdio>

int main()
{
    const double weight_of_A = 3.5, weight_of_B = 7.5;
    double score_in_A, score_in_B;
    scanf("%lf %lf", &score_in_A, &score_in_B);

    const double sum_of_weights = weight_of_A + weight_of_B;
    double average = (weight_of_A*score_in_A + weight_of_B*score_in_B)/sum_of_weights;

    printf("MEDIA = %.5lf\n", average);

    return 0;
}
