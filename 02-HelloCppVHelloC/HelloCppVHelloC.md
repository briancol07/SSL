### Analizar e identificar las diferencias entre hello.cpp y hello.c, en los tres niveles: léxico, sintáctico, y semántico.


 # Codigo Fuente C 
```
    #include <stdio.h> 
            int main() {
            
            printf("Hello, World!");
            return 0;
            } 
```
# Codigo Fuente C++
```
#include <iostream>

        int main() {
            std::cout << "Hello World!";
            return 0;
        }
```

# Codigo Fuente Python
```
print("Hello World!")
```
   
Comparacion        |C           |   C++  | Python 
-------------------|------------|-------|---------
Sintaxis           |Palabras Reservadas: **int,include,return**.  Caracter de Puntuacion: **(),{},;**  Metasimbolos : **<>** Identificadores: **noDigito (las letras) y digito que son los numero**|Difiere en algunas cosas a la hora de escribirlo ej el :: para resolucion de namespaces| Muy parecido a los otros tienen la mismas palabras claves pero no tiene un final sentencia( ; )  
Semantico|Las sentencias compuestas se indican con  llaves  y tiene conjunto propio de declaraciones , Tambien estan  la semantica de operadores que es especifica realizacion de tarea ejemplo El # en las librerias |Muy parecido a c ya que tienen las mismas bases |No tiene tipos en la declaracion y la declaracion de bloques se realiza atravez (:)
Lexico   |Flujo de Caracteres -> Secuencia de Lexemas -> Secuencia de Tokens Empieza analizando de arriba hacia abajo y detecta la libreria  luego el tipo de la funcion y el identificador main luego el centinela que es el espacio , luego vienen los lenguajes regulares como las {}   | la version en C puede ser interpretada un compilador C++, pero no al revez, por el tema de los lexemas | Python como los otros dos tambien es un lenguaje compylado pero al tener distintas reglas no puede ser interpretado o compilado por ninguno de los otros o viceversa


