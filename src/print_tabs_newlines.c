#include <stdlib.h>
#include <stdio.h>

void main(){
        while((c = getchar()) != EOF){
        if(c != ' ') blanking = 0;
        else if(blanking) {
            continue;
        }
        else{
             blanking = 1;
        }

        putchar(c);
    }

}
