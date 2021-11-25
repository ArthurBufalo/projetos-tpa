#include <stdio.h>
#include <locale.h>

int main() {
    int vet[10], p = 0;
    setlocale(LC_ALL, "portuguese");
    for (int x = 0; x < 10; x++) {
        printf("Insira o %d número: ", x + 1);
        scanf("%d", vet[x]);
    }
    for (int x = 0; x < 10; x++) {
        if (vet[x] % 2 == 0) p++;
    }
    printf("%d números são pares", p);
    return 1;
}