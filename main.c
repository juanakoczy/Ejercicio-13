//Implemente una función que reciba dos strings como parámetro y devuelva 1 si son
//iguales y 0 en caso contrario. No se puede usar la función strcmp() de la librería
//string.h.
#include <stdio.h>

int compare (char *cadena1, char *cadena2)
{
    int i=0;
    while (cadena1[i]!= '\0' || cadena2[i]!= '\0')   //mientras las cadenas no terminen
    {
        if (cadena1[i]!=cadena2[i]) //si encuentra una diferencia devuelve 0
        {
            return 0;
        }
        i++; //mientras no haya diferencias pasa al siguiente
    }
    return 1; //si termina quiere decir q son iguales
}

int main() {
    char palabra1[30];
    char palabra2[30];
    printf("Ingrese la palabra 1:\n");
    fflush(stdin);
    gets (palabra1);
    printf("Ingrese la palabra 2:\n");
    fflush(stdin);
    gets (palabra2);
    compare(palabra1,palabra2);
    if (compare(palabra1,palabra2))
    {
        printf("Las cadenas son iguales.\n");
    }
    else {
        printf("Las cadenas son diferentes.\n");
    }
    return 0;
}
