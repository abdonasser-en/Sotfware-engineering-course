#include <stdio.h>


int main(void)
{
    int a; // integer
    a = 10;

    int *p; // pointer to integer
    p=&a;

    *p=12; // overwrite the variables 

    printf("a=%d\n", a);
    printf("a=%d\n", *p);
    printf("adress of %d\n", p);

    printf("adresse of p+ %d\n", p);
    
    // int b = 5;
    // p=&b;
    // printf("b=%d\n", b);
    // printf("adresse de b main %d\n", p);
}