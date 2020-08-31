#include <stdlib.h>
#include <memory.h>
#include <Comparacion.h>
//VINCULAR LOS DEFINES
#include "ArbolDinamico.h"

#define TODO_OK 0
#define DUPLICADO 1
#define SIN_MEM 2

void crearArbol(Arbol* pa)
{
    *pa = NULL;
}

int arbolInsertar(Arbol* pa, void* dato, unsigned tamElem, Cmp cmp)
{
    int comp;
    while(*pa && (comp = cmp(dato, (*pa)->dato)) != 0)
        pa = comp < 0 ? &(*pa)->hIzq :  &(*pa)->hDer;

    if(*pa && comp == 0)
        return DUPLICADO;

    *pa = (NodoA*)malloc(sizeof(NodoA));

    if(!*pa)
        return SIN_MEM;

    (*pa)->dato = malloc(tamElem);

    if(!(*pa)->dato)
    {
        free(*pa);
        return SIN_MEM;
    }

    memcpy((*pa)->dato, dato, tamElem);
    (*pa)->tamElem = tamElem;
    (*pa)->hIzq = (*pa)->hDer = NULL;

    return TODO_OK;
}

int arbolBuscar(const Arbol* pa, void* dato, unsigned tamElem, Cmp cmp)
{
    int comp;
    while(*pa && (comp = cmp(dato, (*pa)->dato)) != 0)
        pa = comp < 0 ? &(*pa)->hIzq :  &(*pa)->hDer;

    if(*pa && comp == 0)
    {
        memcpy(dato, (*pa)->dato, MINIMO(tamElem, (*pa)->tamElem));
        return VERDADERO;
    }

    return FALSO;
}
