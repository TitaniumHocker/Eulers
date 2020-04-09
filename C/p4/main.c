#include <stdio.h>
#include <stdlib.h>


int reverse_number(int num)
{
    int result = 0;
    while(num != 0)
    {
        result *= 10;
        result += num % 10;
        num /= 10;
    }
    return result;
}

int main(int argc, char *argv[])
{
    int answ = 0;
    int buf = 0;
    
    for(int i = 100; i < 1000; i++)
    {
        for(int k = 100; k < 1000; k++)
        {
            buf = i * k;
            if(buf == reverse_number(buf) && buf > answ)
            {
                answ = buf;
            }        
        }
    }

    printf("\nAnswer is: %d\n", answ);
    return 0;
}
