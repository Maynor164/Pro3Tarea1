#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
//Sumamos nuestras 2 variables ya creadas
    return a+b;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
//Restas nuestras 2 variables ya creadas
    return a-b;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
//Multiplicamos nuestras 2 variables ya creadas
    return a*b;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
//Dividimos nuestras 2 variables ya creadas
    return a/b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
//Evaluamos cual de nuestras 2 variables es mayor
if (a>b)
//Si a es mayor regresa el valor de a
 return a;
 else
//Caso contrario regresa el valor de b
    return b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
//Evaluamos cual de nuestras 2 variables es menor
    if (a<b)
//Si a es mayor regresa el valor de a
 return a;
 else
//Caso contrario regresa el valor de b
    return b;;
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
//Evaluamos las 3 variables para saber cual es mayor
    if (a>b && a>c)
//Ya comparadas las 3 si a es mayor que b y c regresa a
    return a;
    if (b>a && b>c)
//Ya descartando que a no es mayor evaluamos si b es mayor que a o c, dado que si regresa el valor de b
    return b;
//Ya en este punto se sobreentiende que c es mayor y retorna su valor
    else
    return c;
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
//Asignamos la posicion en nuestro arreglo y lo igualamos al valor almacenado
arreglo[posicion]=valor;
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
//Se asigna el valor de nuestro arreglo en la variable posicion
    return arreglo[posicion];
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
//Creamos nuestra variable almacenadora
int mayor=0;
//Recorremos todo el arreglo con la variable i
    for(int i=0;i<tamano;i++)
        {
//Evaluamos cual de nuestros valores es mayor y lo almacenamos en nuestra variable
            if(arreglo[i]>mayor)
            mayor=arreglo[i];
        }
//Regresamos el valor de nuestra variable que contiene el numero mayor del arreglo
    return mayor;
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
//Creamos y le asignamos un valor a nuestra variable para poder evaluar
int menor=99999;
//Recorremos todo el arreglo con la variable i
    for(int i=0;i<tamano;i++)
        {
//Evaluamos si los valores de nuestro arreglo son menores a nuestra variable y almacenamos
            if(arreglo[i]<menor)
            menor=arreglo[i];
        }
//Retornamos nuestra variable ya con el valor menor
    return menor;
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
//Creamos nuestra variables
int acumu=0;
int prome=0;
//Recorremos todo el arreglo con la variable i
   for(int i=0; i<tamano;i++)
   {
//Nuestra variable se va almacenando en nuestro arreglo
    acumu += arreglo[i];
    }
//Luego realizamos nuestra operacion de nuestra variable acumulada entre el tamaño
//Y el resultado queda almacenado en nuestra variable final y es el valor del promedio
   return prome=acumu/tamano;


}
int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
