#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_even(int i)
{
    if(i % 2 == 0){
        return true;
    } else {
        return false;
    }
}


int main(int argc, char *argv[])
{
    long int answ = 0;
    long int full[33] = {0};
    long int fib(int n)
    {
        if(n <= 2)
        {
            return n;
        }
        if(full[n] == 0)
        {
           full[n] = fib(n-1) + fib(n-2); 
        }
        return full[n];
    }

    for(int i = 0; i < 33; i++)
    {
        if(is_even(fib(i)))
        {
            answ += fib(i);
        }
    }

    printf("\nAnswer is: %d\n", answ);
    return 0;
}
