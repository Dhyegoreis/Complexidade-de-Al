#include <stdio.h>
#include <time.h>

//Logaritima

void contar(int n) {
    for (int i = 1; i <= n; i *= 2) {
        printf("%d\n", i);
    }
}

int main() {
    clock_t incio, fim;
    
    incio = clock( );
    contar(100000);
    fim = clock();

    double tempo_gasto = ((double)fim - incio) / CLOCKS_PER_SEC;
    printf("Tempo gassto: %f segundos\n", tempo_gasto);


    return 0;
}

