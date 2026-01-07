// Para comenzar vamos a crear un hola mundo en C, este es un lenguaje compilado
// Requiere compilarese y tener el lenguaje instalado para poder ejecutar
// cuamquier programa En este caso helloWordl.C es un programa que te va a
// imprimir un mensaje o string en consola Utilizando la funcion printf, a
// continuacion te explico paso a paso la estructura de un programa vasico en C

// NOTA, En C asi como en varios lenguajes de programaciion se utilisa el doble
// slash para hacer comentarios

// Paso uno, se declaran las Librerias que se van a utilizar en el programa, son
// paquetes de funcuines que Ya vienen de manera nativa en el lenguaje para
// poder usarlas si la necesidad de crearlas desde cero

#include <stdio.h>
#include <conio.h> //Esta libreria es la mas basica en C, se usa para todos los programas y nos permite usar innputs y outputs, las librerias asi como las macros de delacra usando # y el nombre de la libreria como se ve en el codigo
int main() {       // Aqui inicializamos la funcion principal, main para que el
             // programa se ejecute
    printf("Hola Mundo"); //Aqui llamamos a la funcin de printf que es la forma de imprimir el mensaje en consola.
    //puedes imprimir cualquier cosa en consola usando esta funcion, se tiene que tomar en cuneta que es C requier de manera obligatoria ; despues de cada declaracion

    getch(); //Esta es la funcion que llamamos mediante  la libreria de conio, para que no se cierre en automatica la consola  al ejecutarlo
    
    return 0; //Esta es la funcion que retorna 0, que significa que el programa se ejecuto correctamente
}