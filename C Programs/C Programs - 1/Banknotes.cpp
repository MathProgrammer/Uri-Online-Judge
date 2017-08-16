#include <cstdio>

int main()
{
    int currency_value[7] = {100, 50, 20, 10, 5, 2, 1};

    int amount;
    scanf("%d", &amount);

    int no_of_notes_used[7] = {0}, original_amount = amount;

    for(int note_i = 0; note_i < 7; note_i++)
    {
        no_of_notes_used[note_i] = amount/currency_value[note_i];

        amount = amount%currency_value[note_i];
    }

    printf("%d\n", original_amount);
    for(int note_i = 0; note_i < 7; note_i++)
    {
        printf("%d nota(s) de R$ %d,00\n", no_of_notes_used[note_i], currency_value[note_i]);
    }

    return 0;
}
