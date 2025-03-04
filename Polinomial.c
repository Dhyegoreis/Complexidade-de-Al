#include <stdio.h>
#include <time.h>

// Função Quadrática: 
void quadratica(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
        }
    }
}

int main() {
    int n = 100000; 

    clock_t inicio, fim;
    inicio = clock(); 
    quadratica(n);
    fim = clock(); 
    double tempo_gasto = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("Tempo gasto para quadratica(%d): %f segundos\n", n, tempo_gasto);

    return 0;
}
