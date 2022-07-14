#include <stdio.h>

int main(){
    int num = 0;
    int * pNum = &num;
    printf("%p - %p\n", pNum, &num);

    *pNum = 10;
    printf("%d - %d\n", *pNum, num);


    return 0;
}
   