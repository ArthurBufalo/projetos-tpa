#include <stdio.h>
#include <locale.h>

int main() {
    int a[15], b[15], highest;
    setlocale(LC_ALL, "portuguese");
    for (int x = 0; x < 15; x++) {
        printf("n%d: ", x + 1);
        scanf("%d", &a[x]);
        b[x] = a[x] / 2;
    }
    highest = b[0];
    for (int x = 1; x < sizeof(b)/sizeof(*b); x++) {
        if (b[x] > highest) highest = b[x];
    }
    printf("O maior número é %d\n", highest);

    return 1;
}