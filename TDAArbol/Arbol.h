#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED

#include <Comparacion.h> //VINCULAR

void crearArbol(Arbol* pa);
int arbolInsertar(Arbol* pa, void* dato, unsigned tamElem, Cmp cmp);
int arbolBuscar(const Arbol* pa, void* dato, unsigned tamElem, Cmp cmp);
int arbolEliminar(Arbol* pa, void* dato, unsigned tamElem, Cmp cmp);
int arbolTipoBalanceo(const Arbol* pa);
int arbolPodar(Arbol* pa, int nivel);
int arbolEliminarNivel(Arbol* pa, int nivel);
void arbolRecorrerPreorden(const Arbol* pa, Accion accion, void* datos);
void arbolRecorrerEnorden(const Arbol* pa, Accion accion, void* datos);
void arbolRecorrerPosorden(const Arbol* pa, Accion accion, void* datos);
int arbolContarNodos(const Arbol* pa);
int arbolContarNodosHoja(const Arbol* pa);
int arbolContarNodosNoHoja(const Arbol* pa);
int arbolAltura(const Arbol* pa);
void arbolVaciar(Arbol* pa);
//void mostrarArbol(const Arbol* pa, Mostrar mostrar);


#endif // ARBOL_H_INCLUDED
