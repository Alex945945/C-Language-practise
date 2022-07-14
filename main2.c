#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if(x == 10){
        printf("Yes\n");
    } else if(x > 100){
        if (x > 150){
            printf("X is greater than 150\n");
        } else {
            printf("X is less than 150\n");
        }
    } else if(x < 100){
        printf("X is less than 100\n");
    }

    return 0;
}  
int array[x];