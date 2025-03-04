#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void buble_sort(int vetor[], int n) {
    int k, j, aux;
    int contador_trocas = 0;

    clock_t tempo_inicial = clock();
    
    for (k = 1; k < n; k++) {
        for (j = 0; j < n - k; j++) { // Melhoria: n - k para evitar comparações desnecessárias
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;

                contador_trocas++;
            }
        }
    }

    clock_t tempo_final = clock();
    double tempo_gasto = ((double)(tempo_final - tempo_inicial)) / CLOCKS_PER_SEC;

    printf("Tempo de processamento: %.6f segundos\n", tempo_gasto);
    printf("Número de trocas realizadas: %d\n", contador_trocas);
}

int main() {
    int vetor[50];
    int n = 50;

    srand(time(NULL)); // Inicializando a semente do rand()

    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 1000;
    }

    printf("Vetor desordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    buble_sort(vetor, n);

    printf("Vetor ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
