#include <stdio.h>
#include <stdlib.h>
#include <ArbolDinamico.h>
#include <Arbol.h>
///INCLUIR LOS INCLUDES

int cmpInt(const void*, const void*);

int main()
{
    Arbol arbol;
    arbolCrear(&arbol);

    int v[10] = {50, 25, 75, 100, 80, 10,15, 70, 150, 120};
    int* ult = v + 9 ;

    for(int* act = v; act <= ult; act++)
    {
        arbolInsertar(&arbol, act, sizeof(int), cmpInt);
    }

    for(int d = 1; d <= 151; d++)
    {
        if(arbolBuscar(&arbol, &d, sizeof(int), cmpInt))
            printf("%d esta en el arbol.\n", d);

        else
            printf("%d no esta en el arbol.\n", d);

    }

   return 0;
}

int cmpInt(const void*, const void*)
{

}
