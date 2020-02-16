#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool is_prime(int num){
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[])
{
    int answ = 0;
    int MAX = 1000000;
    int counter = 0;

    for(int i = 2; i < MAX; i++){
        if(is_prime(i)){
            counter += 1;
            answ = i;
        }
        if(counter == 10001){
            break;
        }
    }
    
    printf("Answer is: %d\n", answ);
    return 0;
}
