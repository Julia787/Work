#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand (time(0));
    constexpr int SIZE = 40;
    int M[SIZE];
    int max = 0;
    int x_max = 0;


    for ( int i = 0; i < SIZE; ++i)
        {M[i] = rand()%100-50;
        printf("%2d" , M[i]);
        printf(" ");}

    for ( int i = 0; i < SIZE; ++i)
        {
            if ( max < M[i])
             {
                max = M[i];
                x_max = i;}}
                printf("\n%2d, %2d\n", max, x_max);


    for ( int i = SIZE - 1; i >= 0; i--)
        if(M[i] < 0)
        {
            int temp = M[i];
            M[i] = M[x_max];
            M[x_max] = temp;
            break;
        }

    for ( int i = 0; i < SIZE; ++i)
        printf(" %d", M[i] );


    return 0;
}
