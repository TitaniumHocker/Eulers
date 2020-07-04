#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>


char* read_file()
{
    FILE* data = fopen("number.data", "r");
    char* buff = (char*)malloc(1024 * sizeof(char));
    for(int i = 0; i < 1000; i++)
    {
        buff[i] = fgetc(data);
    }
    fclose(data);
    return buff;
}



int main(int argc, char* argv[])
{
    int* answ = (int*)malloc(1024 * sizeof(int));
    char* char_number = read_file();
    *answ = 0;

    for(int i = 0; i < 1000 - 13; i++)
    {
        int* m = (int*)malloc(1024 * sizeof(int));
        *m = 1;
        for(int k = i; k < i + 13; k++)
        {
            printf("%d", char_number[k] - '0');
            *m *= (int)(char_number[k] - '0');
        }
        printf("\n");
        if(*m > *answ)
        {
            printf(": %d\n", *m);
            *answ = *m;
        }
    }

    printf("%d\n", *answ);
    return 0;
}
