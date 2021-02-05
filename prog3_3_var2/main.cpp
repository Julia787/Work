#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    int k = 1;
    int num_last;
    int N_mirror ;
    printf("Enter a number:\n");
    scanf("%d", &N);
    num_last = N % 10;

    while ( k * 10 <= N)
        {
            k *=10;
        }
 //   printf("%d\n", k);
    int d = N / k;
        N %= k;
        N /= 10;
//printf("%d, %d, %d\n",d, N, num_last);
    N_mirror=num_last * k + N * 10 + d;
    printf("%d\n", N_mirror);
    return 0;
}
