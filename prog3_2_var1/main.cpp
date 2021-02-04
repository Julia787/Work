#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    int min = 0;
    int k = 0;

    printf( "Enter 1 number:\n" );
    scanf( "%d", &a );
    printf( "Enter 2 number:\n" );
    scanf( "%d", &b );
    printf( "Enter 3 number:\n" );
    scanf( "%d", &c );


    if ( a > b && a > c )
        min = c;
    else
        if ( a > b && a < c )
            min = b;
        else
            if ( a < b && a < c )
            min = a;

    for ( int i = 2; i <= min; i++ )
    {
      if(( a % i == 0 ) && ( b % i == 0 ) && ( c % i == 0 ) )
        {
            k = i;
            break;
        }
        else
        k = 1;
     }
    if ( a == 1 || b == 1 || c == 1 )
        k = 1;
    printf("NOD: %d\n", k);
    return 0;
}
