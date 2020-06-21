/*
String Test .c 


*/

#include <assert.h>
#include "String.h"
#include <stdbool.h>
#include <string.h>

int main(void){

    assert(GetLength("cadena")==6;

    assert(IsEmpty("")==true);
    assert(IsEmpty("String")==false);

    char test[7];
    Power("12",2,test);
    assert(strcmp(test, "1212") == 0);
    assert(strcmp(test, "1222") != 0);


    return 0;
}