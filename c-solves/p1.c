#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
    int answ = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            answ += i;
        }
    }
    printf("%d\n", answ);
    return 0;
}
