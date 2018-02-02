#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool prim(int szam){
    int oszto = 2;
    bool primszam = true;
    do {
        if (szam % oszto == 0){
            primszam = false;
        }
        oszto++;
    }while (oszto < szam && primszam != false);

    return (primszam);
}


int main(){
    int szam;

    printf("Addj meg egy 1-nel nagyobb egesz szamot: \n");
    scanf("%d", &szam);

    if (prim(szam) || szam == 2){
        printf("Ez egy prim szam!");
    }
    else{
        printf("Ez egy osszetett szam!");
    }
    return 0;
}
