#include <stdio.h>
#include <string.h>
#include "funciones.h"

void leerFactura(struct Factura *factura){
   int n=0;
   double total=0;
   printf("Ingrese la cedula del cliente: ");
   scanf("%d",&factura->cedula);
   printf("Ingrese el nombre del cliente: ");
   fflush(stdin);
   fgets(factura->nombre,20,stdin);
   int len = strlen(factura->nombre)-1;
   factura->nombre[len]='\0';
   //printf("Ingrese el total de la factura: ");
   //scanf("%f",&factura->total);
   printf("Ingrese el numero de productos: ");
   scanf("%d",&n);
   for (int i = 0; i < n; i++)
   {
        printf("Ingres el nombre del producto %d: ",i+1);
        fflush(stdin);
        fgets(factura->productos[i].nombre,50,stdin);
        int len = strlen(factura->productos[i].nombre)-1;
        factura->productos[i].nombre[len]='\0';
        printf("Ingrese el precio del producto %d: ",i+1);
        scanf("%lf",&factura->productos[i].precio);
        printf("Ingrese la cantidad del producto %d: ",i+1);
        scanf("%d",&factura->productos[i].cantidad);
        total+= factura->productos[i].precio * factura->productos[i].cantidad;
        
   }
   factura->total=total;
}

void imprimirFactura(struct Factura *factura){
    printf("Nombre: %s\n",factura->nombre);
    printf("Cedula %d\n",factura->cedula);
    printf("Total: %f\n",factura->total);
}