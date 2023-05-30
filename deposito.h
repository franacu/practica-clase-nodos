//
// Created by Fran on 27/05/2023.
//

#ifndef UNTITLED2_DEPOSITO_H
#define UNTITLED2_DEPOSITO_H

typedef struct nodo
{
    int codigo;
    int volumen;
    char destino[20];
    struct nodo * sig;


}Nodo;
typedef struct deposito
{
    char nombre[25];
    Nodo * sig;

}Deposito;
Deposito * newDeposito(char *nombre);
void ingresar(Deposito * deposito,Nodo * nodo);
Nodo * entregar(Deposito * deposito);
Nodo * newNodo(int codigo,int volumen, char destino[20]);


#endif //UNTITLED2_DEPOSITO_H
