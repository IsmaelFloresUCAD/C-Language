// Tipo de Algoritmo: Ordenación
// Nombre: Bubble Sort
// Funcionamiento: Trabaja repetidamente intercambiando el elemento adyacente en caso de que
// no se encuentre en el orden ascendente adecuado.
// Implementación: Ismael Flores - version c1.0 - 01 octubre 2022

#include <stdio.h>

void mostrarN(int ArrayN[], int b){
    int i;
    printf("\n|----------------------------|");
    for (i=0; i<b; ++i){
        printf("\n Elemento %d -----> %d ",i+1, ArrayN[i]);
    }
    printf("\n|----------------------------|");
}

void ordenaBurbuja(int ArrayN[], int b){
    int i, j;
    for(i=0; i<b-1;++i){
        for(j=0;j<b-1;++j){
            if (ArrayN[j] > ArrayN[j+1]){
                int tem = ArrayN[j+1];
                ArrayN[j+1] = ArrayN[j];
                ArrayN[j] = tem;
            }
        }
    }
    mostrarN(ArrayN,b);
}

int main() {
    int b,i,nn;
    printf("Introduzca la longitud del arreglo: ");
    scanf("%d", &nn);
    int ArrayN[nn];
    for (i=0; i < nn; ++i)
    {
        printf("Introduzca el numero para el elemento %d: ",i+1);
        scanf("%d", &ArrayN[i]);
    }
    b = sizeof(ArrayN) / sizeof(ArrayN[0]);
    printf("\n++ SIN ORDENAR ++");
    mostrarN(ArrayN,b);
    printf("\n++ ORDENADO ++");
    ordenaBurbuja(ArrayN,b);
    return 0;
}