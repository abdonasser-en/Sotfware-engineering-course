#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("%d bytes for integer int\n",sizeof(int));
    printf("%d bytes for float \n",sizeof(float));
    printf("%d bytes for char \n",sizeof(char));
    printf("%d bytes for long \n",sizeof(long));
    printf("%d bytes for double \n",sizeof(double));
    printf("%d bytes for short \n",sizeof(short));
    // printf("%d is the of integer",sizeof());
    return 0;
}
