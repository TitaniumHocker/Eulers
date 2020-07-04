#include <stdio.h>
#include <stdlib.h>
#include <math.h>


long int pows_sum(int n)
{
    long int result = 0;
    for(int i = 0; i <= n; i++)
    {
        result += pow(i, 2);
    }
    return result;
}


long int sum_pow(int n)
{
    long int result = 0;
    for(int i = 0; i <= n; i++)
    {
        result += i;
    }
    return pow(result, 2);
}


int main(int argc, char *argv[])
{
    long int answ = abs(pows_sum(100) - sum_pow(100));
    printf("\nAnswer is: %d\n", answ);
    return 0;
}
