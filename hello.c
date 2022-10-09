#include <stdio.h>

int main(void){
    decirHola("Israel")
    return 0;
}

void decirHola(char* nombre){
    printf("Hola %s , ¿como estas?", nombre);
}