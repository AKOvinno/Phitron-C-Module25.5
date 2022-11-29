#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int* p = &a;
    int* q = &b;
    int* r  = &c;

    printf("%d\n", *p+*q+*r);

    return 0;
}
