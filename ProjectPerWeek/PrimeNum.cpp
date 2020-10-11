#include <stdio.h>

int checkPrime(int);

int main()
{
    int n, prime;
    printf(" Input a positive number : ");
    scanf_s("%d", &n);
    prime = checkPrime(n);
    if (prime == 1) printf(" The number %d is a prime number.\n", n);
    else printf(" The number %d is not a prime number.\n", n);

    return 0;
}

int checkPrime(int n)
{
    int i = 2;
    while (i <= n / 2)
    {
        if (n % i == 0)
            return 0;
        else
            i++;
    }
    return 1;
}