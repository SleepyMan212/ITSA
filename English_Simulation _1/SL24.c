/*
	status: ac
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cases;

    while(scanf("%d", &cases)!=EOF && cases>0)
    {
        int three[3] = {0};

        while(cases--)
        {
           int number;
           scanf("%d", &number);
           three[number%3]++;
        }

        printf("%d %d %d\n", three[0], three[1], three[2]);
    }

    return 0;
}
