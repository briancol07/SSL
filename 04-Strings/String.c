/*


string.c

*/
#include "String.h"
#include <stdbool.h>



unsigned GetLength(const char str[]){
    unsigned a=0;
    for(;str[a]!='\0'; a++){
        
    }
    return a;
}


bool IsEmpty(const char str[]){
    return GetLength(str)==0;
}


void Power(const char str[], const unsigned exp, char resultado[]){
    unsigned lengthResultado = GetLength(str)*exp;
    for(unsigned i=0; i<lengthResultado; i++){
        resultado[i]=str[i%GetLength(str)];
    }
    resultado[lengthResultado]='\0'; //fin de la cadena
}


