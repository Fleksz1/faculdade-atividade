#include <stdio.h>

int main() {
    int vetor[] = {10, 20, 35, 50, 75};
    int alvo = 55;
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
  
  
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[i] + vetor[j] == alvo) {
                printf("Encontrado: %d + %d = %d\n", vetor[i], vetor[j], alvo);
                printf("Posições: %d e %d\n", i, j);
                return 0;
            }
        }
    }

    printf("Nenhuma combinação encontrada que some %d.\n", alvo);
    return 0;
}
