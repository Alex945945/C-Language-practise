#include <stdio.h>

struct Abstract {
    int width, height;
};

void calc(struct Abstract *obj);

int main(){
    struct Abstract square = {5, 7};
    calc(&square);

    return 0;
}

void calc(struct Abstract *obj) {
    int res = obj->width * obj->height;
    printf("Res: %d\n", res);
}