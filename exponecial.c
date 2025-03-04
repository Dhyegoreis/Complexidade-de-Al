#include <stdio.h>
#include <time.h>

void exponencial(int n) {
    if (n <= 0) return;
    exponencial(n - 1);
    exponencial(n - 1);
}

int main() {
    int n = 100000; 

    clock_t inicio, fim;
    inicio = clock(); 
    exponencial(n);
    fim = clock(); 

    double tempo_gasto = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("Tempo gasto para exponencial(%d): %f segundos\n", n, tempo_gasto);

    return 0;
}