#include <cstdio>
#include <vector>
#include <algorithm>

#define all(v) (v).begin(), (v).end()
using namespace std;

int main()
{
    int no_of_test_cases;
    scanf("%d", &no_of_test_cases);

    for(int case_i = 1; case_i <= no_of_test_cases; case_i++)
    {
        int no_of_players;
        scanf("%d", &no_of_players);

        vector <int> age(no_of_players);
        for(int i = 0; i < no_of_players; i++)
            scanf("%d", &age[i]);

        sort(all(age));

        printf("Case %d: %d\n", case_i, age[no_of_players/2]);
    }
    return 0;
}
