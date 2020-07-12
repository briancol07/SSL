/*
    Word Counter 
    Brian Colman 40130342 

*/

#include<stdio.h>

int main (){
    
char carac;
int nw=0,nl=0,nc=0;
INICIO:
    if((carac==getchar())!=EOF){
        ++nc;
        if(carac=='\n') ++nl;
        if(carac==' '|| carac=='\n'|| carac== '\t') goto INICIO ;
        else { ++nw; goto CONTADOR;}

    }

CONTADOR:   
    if((carac==getchar())!=EOF){
        ++nc;
        if(carac=='\n') ++nl;
        if(carac==' '|| carac=='\n'|| carac== '\t') goto INICIO ;
        else {goto CONTADOR;}
    }

printf("lines:%d words: %d characters:%d",nl,nw,nc);
}