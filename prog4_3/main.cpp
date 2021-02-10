#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand (time(0));
    constexpr int m = 7;
    constexpr int n = 7;
    int A[m][n];

    for ( int i = 0; i < m; ++i )
    {
        for ( int j = 0; j < n; ++j )
            A[i][j] = rand() % 100;
    }

    for ( int i = 0; i < m; ++i )
    {
        for ( int j = 0; j < n; ++j )
            printf( "%2d ", A[i][j] );
        printf( "\n" );
    }
    int k;
    printf("Vvedite chislo k:");
    scanf("%d", &k);

    int temp;
    for ( int i = 0; i < n; ++i)
        {
            int temp = A[i][k];
            A[i][k] = A[k][i];
            A[k][i] = temp;

        }
    printf( "New matrix:\n" );

    for ( int i = 0; i < m; ++i )
    {
        for ( int j = 0; j < n; ++j )
            printf( "%2d ", A[i][j] );
        printf( "\n" );
    }
    return 0;
}
