#include <stdio.h>
#include <locale.h>

int main() {
    int user[25][3];
    setlocale(LC_ALL, "portuguese");
    for (int x = 0; x < 25; x++) {
        printf("Insira a idade da %da pessoa: ", x + 1);
        scanf("%d", &user[x][0]);
        printf("Insira a altura da %da pessoa: ", x + 1);
        scanf("%d", &user[x][1]);
        printf("Insira o peso da %da pessoa: ", x + 1);
        scanf("%d", &user[x][2]);
    } 
    int x, media[3], mais50 = 0, peso[2];
    peso[0] = 0;
    media[0] = 0;
    media[1] = 0;
    for (x = 0; x < 25; x++) {
        if (user[x][0] > 50) mais50++;
        if (user[x][0] >= 10 && user[x][0] <= 20) {
            media[0] += user[x][1];
            media[1]++;
        }
        if (user[x][2] < 40) peso[0]++;
    }
    if (media[0] > 0 || media[1] > 0) media[2] = (media[0] / media[1]);
    peso[1] = (peso[0] * 100) / x;
    printf("%d pessoas tem mais de 50 anos.\n%d é a média de altura entre 10-20 anos.\n%d%% das pessoas tem menos de 40Kg.\n", mais50, media[2], peso[1]);
    return 1;
}