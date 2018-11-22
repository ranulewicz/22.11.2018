#include <stdio.h>

int NWD(int a, int b) {
    do {
        a < b ? b -= a : (a -= b);
    } while (a != b);
    return a;
}

int main() {
    int a, b;
    printf("najmniejsza wspolna wielokrotnosc\n");
    printf("podaj a: "); scanf("%d", &a);
    printf("podaj b: "); scanf("%d", &b);\

    printf("wynik: %d\n", a * b / NWD(a, b));

    return 0;

}