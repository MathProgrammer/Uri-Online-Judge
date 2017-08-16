#include <cstdio>

int main()
{
    int note_value[6] = {100, 50, 20, 10, 5, 2};
    int penny_values[6] = {100, 50, 25, 10, 5, 1};

    int notes, pennies;
    scanf("%d.%d", &notes, &pennies);

    int no_of_notes_used[6] = {0};
    for(int note_i = 0; note_i < 6; note_i++)
    {
        no_of_notes_used[note_i] = notes/note_value[note_i];
        notes = notes%note_value[note_i];
    }

    pennies += notes*100; //Converted to pennies
    int no_of_pennies_used[6] = {0};
    for(int penny_i = 0; penny_i < 6; penny_i++)
    {
        no_of_pennies_used[penny_i] = pennies/penny_values[penny_i];
        pennies = pennies%penny_values[penny_i];
    }

    printf("NOTAS:\n");
    for(int note_i = 0; note_i < 6; note_i++)
    {
        printf("%d nota(s) de R$ %d.00\n", no_of_notes_used[note_i], note_value[note_i]);
    }

    printf("MOEDAS:\n");
    for(int penny_i = 0; penny_i < 6; penny_i++)
    {
        double penny_value = penny_values[penny_i]/100.0;

        printf("%d moeda(s) de R$ %.2lf\n", no_of_pennies_used[penny_i], penny_value);
    }

    return 0;
}
