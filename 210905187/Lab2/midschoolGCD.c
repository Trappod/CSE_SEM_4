#include <stdio.h>
#include <math.h>

int isprime(int x,int *op)
{
    int c = 0, i;
    for(i = 2; i < x; i++)
        {
        (*op)++;
        if(x % i == 0)
            return 0;
    }
        return 1;
}

void main() {
    int gcd = 1, n1, n2, i = 2, x, y, opCount = 0;
    printf("Enter the first number to be checked");
    scanf("%d",&n1);
    printf("Enter the second number to be checked");
    scanf("%d",&n2);
    x = n1 < n2 ? n1 : n2;
    y = n1 > n2 ? n1 : n2;
    do {
        opCount++;
        if ((x % i == 0) && (y % i == 0)) {
            if (isprime(i,&opCount)) {
                x = x / i;
                y = y / i;
                gcd *= i;
                i--;
            }
        }
        i++;
    }
    while (i <= x);
    printf("The GCD of %d and %d is : %d\nOpCount is %d\n", n1, n2, gcd, opCount );
}