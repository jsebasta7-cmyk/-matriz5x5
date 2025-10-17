#include <stdio.h> 
int main (void) {
int Tipantuna [5][5]= {0};
int i,j;

    printf("Tipantuna: n\n");
    printf ("Matriz 5x5:\n");

    for (i=0; i <5; ++i) {
        for (j= 0; j < 5;++j ){
            printf("%d", Tipantuna [i][j]);
        }

        printf("\n");


    }

 }