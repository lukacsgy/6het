#include <stdio.h>
#include <stdlib.h>

typedef struct Ido{
    int ora, perc;
}Ido;

void ido_kiir(Ido i){

    printf("%2d:%2d", i.ora, i.perc);
}

int main(void){

    printf("Hello world!\n");
    return 0;
}
