#include <stdio.h>
#include <locale.h>

int main() {
    int idade[10], dezoito = 0;
    setlocale(LC_ALL, "portuguese");
    for (int x = 0; x < 10; x++) {
        printf("Insira a idade do usuário n%d: ", x + 1);
        //cout << "Insira a idade do usuário n" << x+1 << ": ";
        scanf("%d", &idade[x]);
        //cin >> idade[x];
    }
    for (int x = 0; x < sizeof(idade)/sizeof(*idade); x++) {
        if (idade[x] >= 18) dezoito++;
    }
    printf("%d usuários tem mais de 18 anos", dezoito);
    //cout << dezoito << '\n';
    return 1;
}
