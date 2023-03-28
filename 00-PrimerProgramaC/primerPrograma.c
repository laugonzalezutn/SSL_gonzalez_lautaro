#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    

    // Pide al usuario que ingrese un número del 1 al 5
    printf("Ingresa un numero del 1 al 5: ");
    scanf("%d", &num);

    // Usa un switch para seleccionar la frase correspondiente al número
    switch (num) {
        case 1:
            printf("La felicidad es importante, pero la libertad lo es aun mas.\n");
            break;
        case 2:
            printf("En primer lugar acabemos con Socrates, porque ya estoy harto de este invento de que no saber nada es un signo de sabiduria.\n");
            break;
        case 3:
            printf("Las computadoras son como dioses del Antiguo Testamento; llenos de reglas y faltos de piedad.\n");
            break;
        case 4:
            printf("La violencia es el ultimo recurso del incompetente.\n");
            break;
        case 5:
            printf("Uno puede conseguir mucho más con una palabra amable y una pistola que con solo una palabra amable.\n");
            break;
        default:
            printf("Numero invalido, lastima.\n");
            break;
    }
    char frase;

    printf("Espero que te haya sido de utilidad");
    scanf("%s", frase);

    return 0;
}
