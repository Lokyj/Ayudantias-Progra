#include <iostream>

using namespace std;

// Gestión de productos
void agregarProducto(string nombresProd[50], int preciosProd[50], float descuentosProd[50], int stockProd[50],  string nombre, int precio, int stock);
int buscarProducto(string nombresProd[50],  string nombre);
void buscarProductoPorIndice(string nombresProd[50],  int indiceProducto);
void mostrarProductos(string nombresProd[50], int preciosProd[50], float descuentosProd[50], int stockProd[50]);
bool agregarDescuento(string nombresProd[50], float descuentosProd[50],  string nombre, float nuevoDescuento);

// Gestión de ventas
void registrarVenta(string nombresProd[50], int preciosProd[50], float descuentosProd[50], int stockProd[50],int ventas[200][3],string nombreProducto, int cantidad);

float totalRecaudadoProducto(int ventas[200][3], int indiceProducto);
int productoConLaMayorVenta(int ventas[200][3]);
float porcentajeProductoSobreTotal(int ventas[200][3], int indiceProducto);

int main() {
    // Declaración de arreglos vacios
    string nombresProd[50] = {}; // igualarlo a {} crea un arreglo completamente de cadenas vacias ("")
    int preciosProd[50] = {}; // llena completamente de 0
    float descuentosProd[50] = {};
    int stockProd[50] = {};
    int ventas[200][3] = {};

    return 0;
}