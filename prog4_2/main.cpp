#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand (time(0));
    constexpr int ASIZE = 30;
    constexpr int BSIZE = 15;
    int A[ASIZE];
    int B[BSIZE];
    int max = 0;
    int x_max = 0;



    for ( int i = 0; i < ASIZE; ++i)
        {A[i] = rand()%100;
        printf("%2d" , A[i]);
        printf(" ");}

    printf("\n");

    for ( int j = 0; j < BSIZE; ++j)
        {B[j] = rand()%100;
        printf("%2d" , B[j]);
        printf(" ");}
    printf("\n");
    int temp;
    for ( int i = 0; i < ASIZE; ++i)
        {
        for ( int j = 0; j < BSIZE; ++j)
        {
            if (A[i] == B[j])
            printf ("%d ", i);
            else  temp =0;

        }
        }
    if (temp = 0)
        printf("'элемент B  в A не встретился");
    return 0;
}
