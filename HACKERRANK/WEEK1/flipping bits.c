#include <stdio.h>

unsigned int flippingBits(unsigned int num) 
{
    return ~num;
}

int main()
 {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
     {
        unsigned int n;
        scanf("%u", &n);
        printf("%u\n", flippingBits(n));
    }

    return 0;
}