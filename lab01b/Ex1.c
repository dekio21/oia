#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerador_vetor_aleatorio(int n, int *vetor) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 100;
    }
}

void bubble_sort(int *vetor, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

void insertion_sort(int *vetor, int n) {
    for (int i = 1; i < n; i++) {
        int key = vetor[i];
        int j = i - 1;
        while (j >= 0 && vetor[j] > key) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = key;
    }
}

void selection_sort(int *vetor, int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (vetor[j] < vetor[min_index]) {
                min_index = j;
            }
        }
        int temp = vetor[min_index];
        vetor[min_index] = vetor[i];
        vetor[i] = temp;
    }
}

void shell_sort(int *vetor, int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = vetor[i];
            int j;
            for (j = i; j >= gap && vetor[j - gap] > temp; j -= gap) {
                vetor[j] = vetor[j - gap];
            }
            vetor[j] = temp;
        }
    }
}

int is_ordenado(int *vetor, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (vetor[i] > vetor[i + 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int tamanho[] = {1000, 5000, 10000};
    for (int s = 0; s < sizeof(tamanho)/sizeof(tamanho[0]); s++) {
        int size = tamanho[s];
        printf("Ordenando vetor de tamanho %d\n", size);
        
        int *vetor_bubble_sort = malloc(size * sizeof(int));
        gerador_vetor_aleatorio(size, vetor_bubble_sort);
        bubble_sort(vetor_bubble_sort, size);
        printf("Bubble sort: %s\n", is_ordenado(vetor_bubble_sort, size) ? "ordenado" : "não ordenado");
        
        int *vetor_insertion_sort = malloc(size * sizeof(int));
        gerador_vetor_aleatorio(size, vetor_insertion_sort);
        insertion_sort(vetor_insertion_sort, size);
        printf("Insertion sort: %s\n", is_ordenado(vetor_insertion_sort, size) ? "ordenado" : "não ordenado");
        
        int *vetor_selection_sort = malloc(size * sizeof(int));
        gerador_vetor_aleatorio(size, vetor_selection_sort);
        selection_sort(vetor_selection_sort, size);
        printf("Selection sort: %s\n", is_ordenado(vetor_selection_sort, size) ? "ordenado" : "não ordenado");
        
        int *vetor_shell_sort = malloc(size * sizeof(int));
        gerador_vetor_aleatorio(size, vetor_shell_sort);
        shell_sort(vetor_shell_sort, size);
        printf("Shell sort: %s\n", is_ordenado(vetor_shell_sort, size) ? "ordenado" : "não ordenado");
        
        free(vetor_bubble_sort);
        free(vetor_insertion_sort);
        free(vetor_selection_sort);
        free(vetor_shell_sort);
    }

    return 0;
}