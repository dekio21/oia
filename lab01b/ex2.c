#include <stdio.h>

int main() {
    float nota1 = 5.0; 
    float nota2 = 8.0; 
    float nota3 = 9.0; 
    float media_exs = 7.5; 
    float media_aprov;
    char nota_final;

    media_aprov = (nota1 + nota2 * 2 + nota3 * 3 + media_exs) / 7;

    if (media_aprov >= 9) {
        nota_final = 'A';
    } else if (media_aprov >= 7.5) {
        nota_final = 'B';
    } else if (media_aprov >= 6) {
        nota_final = 'C'; 
    } else if (media_aprov >= 4) {
        nota_final = 'D';
    } else {
        nota_final = 'E';
    }
    
    printf("Media de aproveitamento: %.2f\n", media_aprov);
    printf("A nota final e: %c\n", nota_final);

    return 0;
}

