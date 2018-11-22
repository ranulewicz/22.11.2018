#include <stdio.h>
void zamien(int *a, int *b) {
    int tmp;
    tmp = *a; *a = *b; *b = tmp;
}

int main() {
    int a, b, c;

    printf("podaj a: "); scanf("%d", &a);
    printf("podaj b: "); scanf("%d", &b);

    do {
        if (a < b) zamien(&a, &b);
        c = a - b;
        a = b;
        b = c;

    } while (a != b);

    printf("wynik: %d", a);

    return 0;

}