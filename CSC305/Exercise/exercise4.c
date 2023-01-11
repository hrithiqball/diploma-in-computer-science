#include <stdio.h>

int main()
{
    int score, pass = 0, fail = 0;

    for (int i = 0; i < 30; i++)
    {
        printf("Input student's score :");
        scanf("%d", &score);

        if (score > 50)
            pass++;

        else
            fail++;
    }

    printf("Total passed students are %d\n", pass);
    printf("Total failed students are %d\n", fail);
}