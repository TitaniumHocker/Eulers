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

    if(argc > 2)
    {
        printf("Expected no more then one argument, %d is given.\n", argc - 1);
        return 1;
    }

    int answ = 0;
    int next, current, previous, MAX;

    if(argc == 1){
        MAX = 40000000;
    } else {
        MAX = atoi(argv[1]);
    }

    current = 1;
    previous = 1;
    next = current + previous;

    while(current < MAX)
    {
        if(is_even(current)){
            printf("%d ", current);
            answ += current;
        }
        previous = current;
        current = next;
        next = previous + current;
    }

    printf("\nAnswer is: %d\n", answ);
    return 0;
}
