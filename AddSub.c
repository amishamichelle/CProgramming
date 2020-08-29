#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float e,f;
    scanf("%d %d", &a,&b);
    scanf("%f %f", &e,&f);
    printf("%d %d\n", a+b,a-b);
    printf("%.1f %.1f", e+f,e-f);
    return 0;
}
