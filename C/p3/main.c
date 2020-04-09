#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* ---MUST BE OPTIMISED---
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */


bool is_prime(long int n)
{
    for(long int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[])
{
    long int answ = 1;
    long int num = 1;

    if(argc > 2)
    {
        printf("Expected no more then one argument, %d is given.\n", argc - 1);
        return 1;
    }

    if(argc == 2)
    {
        num = atoi(argv[1]);
    }
    else
    {
        num = 600851475143;
    }

    for(long int i = 2; i < 100000; i++)
    {
        if(is_prime(i))
        {
            if(num % i == 0)
            {
                answ = i;
            }
        }
    }
    
    printf("\nAnswer is: %li\n", answ);
    return 0;
}
