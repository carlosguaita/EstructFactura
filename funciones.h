struct Producto
{
    char nombre[50];
    double precio;
    int cantidad;
};

struct Factura
{
    int cedula;
    char nombre[20];
    float total;
    struct Producto productos[5];
};

void leerFactura(struct Factura *factura);
void imprimirFactura(struct Factura *factura);
