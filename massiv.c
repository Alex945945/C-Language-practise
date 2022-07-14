#include <stdio.h>

q(int *a1) {
    *a1 = 20;
    printf("%d",*a1);

}

int main() {
    
    int a=10;
    
    q(&a);
    printf("%d", a);

}