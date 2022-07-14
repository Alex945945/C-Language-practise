#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    scanf("%d", &i);

    if(i > 5){
        for(int b = 0;b < i;b++){
            printf(" %d", b);
        }
    }
}