/*
 Word Counter enum - switch 
 Brian Colman 40130342

*/

#include <stdio.h>

enum state {In, Out};
typedef enum state State;

int main() {
    State s = Out;
    int nc = 0;
    int nl = 0;
    int nw = 0;
    char carac;

    while((carac = getchar()) != EOF) {
        ++nc;
        switch(carac) {
            case '\n':
                ++nl;
                s = Out;
            break;
            case '\t':
                s = Out;
            break;
            case ' ':
                s = Out;
            break;
            default:
                if (s == Out) {
                    ++nw;
                    s = In;
                }
            break;
        }
    }

    printf("lines:%d words: %d characters:%d", nl, nw, nc);
}