#include <stdio.h>



int main()
{
    float a, c, d,b;
    a=5;
    c=5;
    printf("Get b\n");
    scanf("%f",&b);
    printf("Get d\n");
    scanf("%f",&d);
    a =  a+b-2;
    printf("a=%f\n",a);
    c = c+1;
    printf("c=%f\n",c);
    d = c-a+d;
    printf("d=%f\n",d);
    a = a*c;
    printf("a=%f\n",a);
    c = c-1;
    printf("c=%f\n",c);
    a = a/10;
    printf("a=%f\n",a);
    c = c/2;
    printf("c=%f\n",c);
    b = b-1;
    printf("b=%f\n",b);
    d = d*(c+b+a);
    printf("d=%f\n",d);

}
