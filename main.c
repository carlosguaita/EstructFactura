#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {
    struct Factura factura1;
    leerFactura(&factura1);
    imprimirFactura(&factura1);
    return 0;
}