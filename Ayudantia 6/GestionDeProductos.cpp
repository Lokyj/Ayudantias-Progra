#include <iostream>

using namespace std;

/* Pequeñas aclaraciones:
1. En C++, los arreglos se pueden inicializar con llaves vacías `{}` para crear un arreglo completamente vacío (Ejemplo en el int main()). En caso de String todas las posiciones se inicializan como cadenas vacías `""`, y en caso de enteros todos los valores se inicializan a 0. Si esto no se hace, las posiciones del arreglo pueden contener valores aleatorios (esto debido a como funciona c++), lo cual puede causar errores al realizar comparaciones con IFs. Para realizar las funciones de este ejercicio, asuma que todos los arreglos seran inicializados vacios como en el main.
2. Una funcion puede tener todos los returns que se quieran, pero solo uno de ellos se ejecutará. El return termina la ejecución de la función y retorna el valor indicado. 
3. Una funcion que no sea de tipo void debe siempre retornar un valor, mientras que una funcion de tipo void solo puede usar un return vacío para terminar la ejecución de la función.
4. Los nombres de los parametros de una funcion no deben coincidir necesariamnete con los nombres de las variables con las que se llama a la funcion (llamar a la funcion = usarla), ya sea en el main o en otra funcion.
*/


// Gestión de productos
void agregarProducto(string nombresProd[50], int preciosProd[50], float descuentosProd[50], int stockProd[50],  string nombre, int precio, int stock){
    for (int i=0;i<50;i++){ // Recorre el arreglo de productos
        if(nombresProd[i]==""){  // Si el nombre del producto en la posición i es una cadena vacía, significa que esa posición está disponible
            
            // Considerar que en este tipo de problemas, el precio en la posoción i del arreglo preciosProd, el stock en la posición i del arreglo stockProd y el descuento en la posición i del arreglo descuentosProd corresponden al mismo producto que se está agregando en la posición i del arreglo nombresProd

            nombresProd[i]=nombre; // Agrega el nombre del producto en la posición i
            preciosProd[i]=precio; // Agrega el precio del producto en la posición i
            stockProd[i]=stock; // Agrega el stock del producto en la posición i
            descuentosProd[i]=0; // Inicializa el descuento del producto en la posición i a 0
        }
        if(nombresProd[i]==nombre){ // verifica si el nombre del producto ya existe en el arreglo
            cout << "El producto ya existe." << endl; 
            return; // Si el producto ya existe, no se agrega y se sale de la función
            // Usar un return vacio solo es posible en funciones void, usarlo termina inmediatamente la función
        }
    }
};
int buscarProducto(string nombresProd[50],  string nombre){
    for (int i=0;i<50;i++){
        if(nombresProd[i]==nombre){ // Recorre el arreglo de productos en busca del nombre del producto
            return i; // Retorna el índice en donde se encuentra el nombre producto
        }
    }
    // Esta parte del código se ejecuta solo si no se encuentra el producto, ya que de otra manera se habría retornado i antes y terminado la función
    cout << "Producto no encontrado." << endl;
    return -1; // Retorna -1 si no se encuentra el producto
};
void buscarProductoPorIndice(string nombresProd[50],  int indiceProducto){
    if (indiceProducto >= 0 && indiceProducto < 50) { // Verifica que el índice esté dentro del rango válido del arreglo
        // Si el índice es válido, se verifica si hay un producto registrado en esa posición
        if (nombresProd[indiceProducto] != "") { // Verifica que el nombre del producto no sea una cadena vacía, lo cual sigificaria que aun no se registra un producto en esa posición
            cout << "Producto encontrado: " << nombresProd[indiceProducto] << endl; // Muestra el nombre del producto encontrado en la posición indicada
        } else {
            cout << "No hay producto en la posición " << indiceProducto << endl; // Si el if no es cumple, significa que aun no se registra un producto en esa posición
        }
    } else {
        cout << "Índice invalido." << endl; 
    }
};
void mostrarProductos(string nombresProd[50], int preciosProd[50], float descuentosProd[50], int stockProd[50]){
    cout << "Productos actualemnte registrados:" << endl;
    for (int i=0;i<50;i++){
        if(nombresProd[i]!=""){ // Verifica que el nombre del producto no sea una cadena vacía
            // Si el nombre del producto no es una cadena vacía, significa que hay un producto registrado en esa posición y se muestra su información accediendo a su indice (en este caso i) en los arreglos correspondientes

            cout << "Producto: " << nombresProd[i]<<endl;
            cout << "Precio: " << preciosProd[i]<<endl; 
            cout << "Descuento: " << descuentosProd[i]<<endl;
            cout << "Stock: " << stockProd[i] << endl; 
        }
    }
};
bool agregarDescuento(string nombresProd[50], float descuentosProd[50],  string nombre, float nuevoDescuento){
    // Recordar que una funcion puede ser llamada dentro de otra funcion, por lo que se puede llamar a buscarProducto dentro de agregarDescuento y asi encontrr el indice del producto al que se le quiere agregar un descuento

    int indiceProducto = buscarProducto(nombresProd, nombre); // Busca el índice del producto por su nombre
    if (indiceProducto != -1) { // Si el indice es -1 signifca que la funcion buscarProducto no encontró el producto, por lo que no se puede agregar un descuento
        if (nuevoDescuento >= 0 && nuevoDescuento <= 100) { // Verifica que el nuevo descuento no sea negativo ni mayor a 100%
            descuentosProd[indiceProducto] = nuevoDescuento; // Actualiza el descuento del producto en el índice encontrado
            cout << "Descuento actualizado para " << nombresProd[indiceProducto] << ": " << nuevoDescuento << "%" << endl;
            return true; // Retorna true si se actualizó correctamente el descuento
        } else {
            cout << "Descuento inválido. Debe estar entre 0 y 100." << endl;
            return false; // Retorna false si el descuento no es válido
        }
    } else {
        cout << "Producto no encontrado." << endl;
        return false; // Retorna false si el producto no fue encontrado
    }
};
