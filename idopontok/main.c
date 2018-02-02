#include <stdio.h>
#include <stdlib.h>

typedef struct Ido{
    int ora, perc;
}Ido;

void ido_kiir(Ido i){

    printf("%2d:%2d", i.ora, i.perc);
}

Ido ido_hozzaad(Ido i, int p){
    i.perc += p;
    if (i.perc > 60){
        i.ora += i.perc % 60;
        i.perc -= (i.perc % 60) * 60;
    }
    if (i.ora > 23){
        i.ora -= 24;
    }
    return (i);
}

int ido_eltelt(Ido i1, Ido i2){
    int alap, kiv;
    if (i1.ora  > i2. ora){
        alap = i1.ora * 60 + i1.perc;
        kiv = i2.ora * 60 + i2.perc;
    }
    else{
        alap = i2.ora * 60 + i2.perc;
        kiv = i1.ora * 60 + i1.perc;
    }
    return (alap - kiv);
}

Ido ido_kivon(Ido i, int p){
    i.perc -= p;
    if (i.perc < 0){
        i.ora += i.perc % 60;
        i.perc -= (i.perc % 60) * 60;
    }
    if (i.ora > 23){
        i.ora -= 24;
    }
    return (i);
}
int main(void){

    printf("Hello world!\n");
    return 0;
}
