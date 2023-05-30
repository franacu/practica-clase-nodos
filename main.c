#include <stdio.h>
#include "deposito.h"

int main()
{
    Deposito * depo = newDeposito ("Melicentral");
    entregar(depo);
    ingresar(depo, newNodo(1,5,"trabajo"));
    ingresar(depo, newNodo(2,3,"casa"));

    Nodo * retirar = entregar(depo);
    printf("\nEl paquete Nro %d fue a %s\n",retirar->codigo,retirar->destino);

    retirar=entregar(depo);
    printf("El paquete Nro %d fue a %s\n",retirar->codigo,retirar->destino);
    return 0;
}
