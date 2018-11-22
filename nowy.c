#include <stdio.h>
#include <string.h>

int main(){

    char *TYDZIEN[] = {"poniedzialek", "wtorek", "sro", "czw", "pia", "sobota", "niedziela"};

    int rozmiar = sizeof(TYDZIEN) / sizeof(TYDZIEN[0]);

    int i, dlugosc, j;

    for (i = 0; i < rozmiar; ++i){
        dlugosc = strlen(TYDZIEN[i]);
        for (j = 0; j< dlugosc; ++j) {
            printf("%c  ", TYDZIEN[i][j]);
        }
        printf("\n");
    }
}