# Examen00


## Parte 1 

1. la tarea mas representativa es crear un producto solucion.
2. La informacion es un dato procesado que guarda relacion y es relevante para el lector tiene que ser legible , preciso y concreto,confiable .
3. Algoritmo y estructura de datos , Sintaxis y Semantica de los lenguajes , Paradigma de Programacion , Sistemas operativos,Seguridad informatica ,  Procesamiento leguaje natural , ingenieria en software , tecnicas avanzadas en la construccion de software , inteligencia artificial, bio informatica , sistemas main frame.
4. Sistemas y organizaciones, Analisis de sistemas ,Diseño de sistemas, gestion de recursos humanos , Metodologia de la conduccion de equipos de trabajo, ingeniera en requisitos etc.
5. El paradigma aplicado es el Estructurado
6. Es el proceso mental que no considera las limitaciones tecnologicas ,haciendo una simplificacion del problema

## Parte 2 

1. una secuencia es un conjunto ordenado por algun parametro, encambio el conjunto son todos agrupados por un parametro pero no necesariamente tienen que estar en orden.
2. una secuencia para los matematicos es una sucesion de numeros que siguen un patron.
3. una funcion es una relacion entre dos conjuntos uno de salida que sufre una transformacion y llega al conjunto de llegada 
4. Es una representacion grafica de las relaciones que tiene un conjunto 
5. una particion de un conjunto es una porcion del mismo conjunto como sub conjuntos dentro de el mismo.
6. la unica combinacion de elementos unidos dan el conjunto original y seria P(x)={a},{b}
7. Un lenguaje es un conjunto de palabras y  metodos de combinar , y que sea formal es que formen palabras que contengan un significado o un orden de construccion
8. Es una estructura analitica para reconocer lenguajes  que tienen un numero finito de estados 

## Parte 3 

1. Un algoritmo es una secuencia de pasos para resolver una problematica
2. Es un tipo de programacion que tiene una secuencia de pasos o sentencias que se leen en un orden especifico 
3. Los if , for y while  son estructuras de control.
4. un argumento representa el valor que se le pasa al parametro encambio este es la representacion del valor que espera recibir. Los parametros aparecen en la definicion de los procesos y los otros en los llamados de los mismos.
5. Pueden ser por valor o por referencia 
https://docs.microsoft.com/es-es/dotnet/csharp/programming-guide/classes-and-structs/passing-parameters

El paso de parámetros por referencia permite a los miembros de funciones, métodos, propiedades, indexadores, operadores y constructores cambiar el valor de los parámetros y hacer que ese cambio persista en el entorno de la llamada.

6. Los Parametros de entrada son los que debemos darle valor al llamar a la funcion , emcambio los de salida , son los que cuando termina la funcion el valor que tiene esa variable se mantiene fuera de la misma
7. Son un oconjunto de datos o objetos al cual se le asocian operaciones , osea puede ser implementado utilizando distintas estructuras de datos y proveer la misma funcionalidad 
8. Las diferencias entre una pila y una cola es que la primera se van agregando y solo se puede extraer del ultimo elemento que se ingresa encambio en la cola se ingresa uno y seria el ultimo en salir , sale el primer numero que fue ingresado
9. conjunto de bytes almacenados en un dispositivo el cual contiene una informacion.
10. Esto solo seria la parte que suma todos los valores y luego lo divide por el tamaño del arreglo
o lo podria hacer por punteros eh ir agregando y hasta que no tenga mas valores que ingresar y luego sumarlos y a vez q sumo cuento asi se cuantos valores se agregaron para luego dividirlo
int promedio(int[] arreglo, int longitud){
    int resultado=0;
    for(int i=0; i<longitud ; i++){
        resultado+=arreglo[i];
        }
   return resultado /= arreglo.length();
}