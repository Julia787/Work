#include <stdio.h>
#include <math.h>

void desbin(int N)
{

if (N!=0)
    desbin(N / 2);
else return;

printf("%d", N %2);
return ;

}
