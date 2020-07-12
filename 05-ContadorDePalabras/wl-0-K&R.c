/*
    Word counter K&R
    Brian Colman 40130342


*/



#include <stdio.h>

#define IN 1
#define OUT 0

main() {
    int carac,nw, nc,nl, state;
    state = OUT;
    nl = nw = nc = 0;

    while((carac = getchar()) != EOF) {
        ++nc;
        if (carac == '\n')
                ++nl;
        if (carac == ' ' || carac == '\n' || carac == '\t')
            state = OUT;
        else if(state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("lines:%d words: %d characters:%d \n", nl, nw, nc);
}
