#include <stdlib.h>
#include <stdio.h>
// 1-8
int main(){
    int c, nblanks, ntabs, nnr;
    nblanks=ntabs=nnr=0;
    while((c = getchar()) != EOF){
       switch(c){
           case ' ': nblanks++; break;
           case '\t': ntabs++; break;
           case '\n': nnr++; break;
           default: break;
       }
    }
    printf("nblanks\tntabs\t\nnr:\n%d\t%d\t%d\n", nblanks,ntabs,nnr);
}
