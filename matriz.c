#include <stdio.h>

int main(void) {
int filas, columnas;

printf("Ingrese el numero de filas: ");
scanf("%d", &filas);

printf("Ingrese el numero de columnas: ");
scanf("%d", &columnas);

int Tipantuna[filas][columnas];

for (int i = 0; i < filas; ++i) {
for (int j = 0; j < columnas; ++j) {
if (i == j) {
Tipantuna[i][j] = 1;
} else {
Tipantuna[i][j] = 0;
}
}
}

printf("\nMatriz Tipantuna:\n");
for (int i = 0; i < filas; ++i) {
for (int j = 0; j < columnas; ++j) {
printf("%d ", Tipantuna[i][j]);
}
printf("\n");
}

return 0;
}
