#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    int k = 0;
    printf("Enter a number:\n");
    scanf("%d", &N);

    for ( int i = 1; N > 0; i++)
    {
        N /=10;
        k = i;
    }
    printf("in  this number %d digits\n", k);
    return 0;
}
