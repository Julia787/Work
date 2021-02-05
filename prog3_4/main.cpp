#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    int k = 1;
    printf("Enter a number:\n");
    scanf("%d", &N);

    while (k*2 <= N)
        {
            k *=2;
        }

do{
    int d = N/k;
    printf("%d\n", d);
        N %=k;
        k /=2;}
        while(k);

        return 0;
}
