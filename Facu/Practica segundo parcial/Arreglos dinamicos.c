#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define cantidadElementos 5

void mostrarArreglo(int arreglo2[], int validos);
void cargarArreglo(int arreglo[]);
int irCambiandoArreglo(int arreglo[]);



int main()
{

    int *arreglo;
    int *arreglo2;
    int validos = 0;



    arreglo = (int*)malloc(cantidadElementos * sizeof(int));

    cargarArreglo(arreglo);

    mostrarArreglo(arreglo, cantidadElementos);

    validos = irCambiandoArreglo(arreglo);
    mostrarArreglo(arreglo, validos);



    return 0;
}


void cargarArreglo(int arreglo[])
{

    int i;
    int dato;

    for (i = 0; i < cantidadElementos; i++)
    {

        printf("Ingrese un Numero");
        scanf("%i", &dato);
        arreglo[i] = dato;
    }

}




int irCambiandoArreglo(int arreglo[])
{


//Declaro las variables
//I toma el valor de los validos anteriores, en este caso es una constante
    int i = cantidadElementos;
//Dato va a servir para agregar elementos al arreglo
    int dato;
//respuesta sirve para que se ejecute el loop siempre que quiera el ususario
    int respuesta = 1;

    
//Loop
    while (respuesta == 1)
    {

    //Se le pide que ingrese un nuevo dato
        printf("Ingrese un nuevo dato");
        
        //Se modifca el tamaño del arreglo incrementando en 1, ya que se va a agregar un neuvo elemento 
        arreglo = (int*)realloc(arreglo, (i + 1) * sizeof(int));


//Se pide el dato
        scanf("%i", &dato);
//Se guarda el dato en el arreglo
        arreglo[i] = dato;
//Se muestra el arreglo
        mostrarArreglo(arreglo, i);

//Se pregunta si quiere seguir
        printf("\nIngrese 1 para seguir\n");
        scanf("%i", &respuesta);
//Se incrementa i para que avanze el arreglo
        i++;
    }

//Se retornan los neuvos validos
    return i;
}





void mostrarArreglo(int arreglo[], int validos)
{

    int i;

    for (i=0; i< validos; i++)
    {

        printf("%i\n", arreglo[i]);
    }

}



