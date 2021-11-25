#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int vet[10], res[10], ignore[10], step = 0;
    for (int x = 0; x < 10; x++) {
        printf("Insira o %d número: ", x + 1);
        scanf("%d", vet[x]);
    }

    for (int x = 0; x < 10; x++) {

    }
}