#include <stdio.h>
#include <string.h>


int main() {
    char nome1[] = "Xavier";
    char nome2[] = "Luana";

    int ordem_alfa = strcmp(nome1, nome2);

    if (ordem_alfa < 0) {
        printf("A ordem alfabetica dos nomes e: %s, %s",nome1, nome2);
    }
    else if (ordem_alfa > 0) {
        printf("A ordem alfabetica dos nomes e: %s, %s",nome2, nome1);
    }
    else {
        printf("Os nomes sao iguais");
    }
    return 0;
}
