#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int answ = 0;
    int MAX = 1000000000;

    for(int i = 0; i < MAX; i++){
        for(int k = 1; k <= 20; k++){
            if(i % k != 0){
                answ = 0;
                break;
            }
            answ = i;
        }
        if(answ != 0){
            break;
        }
    }
    
    printf("\nAnswer is: %d\n", answ);
    return 0;
}
