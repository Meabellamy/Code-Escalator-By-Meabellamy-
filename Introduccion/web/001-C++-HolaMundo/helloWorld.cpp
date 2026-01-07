//Aqui vamos a generar el programa en C++ explicado previamente, en C.
//C++ es una mejora o actualizacion de C,  que nos permite trabajar con objetos y mejora la sintaxis, a continuacion te explico paso a paso la estructura de un programa vasico en C++

#include <iostream> //La libreria basica en c++ es iostream
#include <conio.h> //Cabe destacar en en C++ podemos utilizar librerias de C
using namespace std; //Esta linea se utiliza para no repetir std::
int main() { //esta es la forma en la que se declara la funcion principal en C++ al igual que en C
    cout << "Hola Mundo" <<endl;//COUT se utiliza para imprimir en consola es el simil de printf en C
    //Puedes notar que agregamos <<endl; para que el cursor se mueva a la siguiente linea
    getch(); //Esta es la forma de mantener abierta la consola en C++
    return 0;
}
