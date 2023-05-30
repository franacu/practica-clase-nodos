//
// Created by Fran on 27/05/2023.
//
#include "deposito.h"
#include <stdio.h>
#include <mm_malloc.h>
#include <stdlib.h>
#include <string.h>


Deposito * newDeposito(char *nombre)
{
    Deposito * depoAux=malloc(sizeof(Deposito));

    if (depoAux == NULL)
    {
        printf("No tiene memoriaa");
        exit(-1);

    }
    strcpy(depoAux-> nombre,nombre);
    depoAux->sig=NULL;
    return depoAux;
}
Nodo * newNodo(int codigo,int volumen, char destino[20])
{
    Nodo * nodoAux=malloc(sizeof(Nodo));
    if (nodoAux == NULL)
    {
        printf("No tiene memoriaa");
        exit(-1);
    }
    nodoAux->codigo=codigo;
    nodoAux->volumen=volumen;
    strcpy(nodoAux-> destino,destino);
    nodoAux->sig=NULL;
    return nodoAux;
}
void ingresar(Deposito * deposito,Nodo * nodo)
{
    if(deposito->sig == NULL)
    {
        deposito->sig=nodo;
    }
    else
    {
        Nodo * aux=deposito->sig;
        while(aux->sig != NULL)
        {
            aux->sig = aux->sig->sig;
        }
        aux->sig=nodo;
    }

}
Nodo * entregar(Deposito * deposito)
{
    if(deposito->sig == NULL)
    {
        printf("deposito vacio");
        return NULL;
    }
    else
    {
        Nodo * aux=deposito->sig;
        deposito->sig = aux->sig;
        return aux;
    }

}