#include <stdio.h>
#include <stdbool.h>

bool czyliczba(char znak) {
    if (('0' <= znak) && (znak <= '9')){
        return true;
    }
    return false;
}

int main() {

    char ciag[] = "Ala ma1 kota";
    int i;
    bool istnieje = false;

    for (i = 0; ciag[i]; ++i){
        if (czyliczba(ciag[i])){
            istnieje = true;
            break;
        }
    }

    istnieje ? printf("istnieje") : printf("nie istenieje");

    return 0;
}