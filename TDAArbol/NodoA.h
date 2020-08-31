#ifndef NODOA_H_INCLUDED
#define NODOA_H_INCLUDED

typedef struct SNodoA
{
    void* dato;
    unsigned tamElem;
    struct SNodoA* hIzq;
    struct SNodoA* hDer;

}
NodoA;

#endif // NODOA_H_INCLUDED
