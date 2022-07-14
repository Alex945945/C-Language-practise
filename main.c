#include <stdio.h>

int main (){
    int arr[] = {5, 7, 2, 56, 34, 89};
    arr[0] = 56;

    float numbers[3];
    numbers[0] = 5.4f;
    numbers[1] = 4.23f;
    numbers[2] = 67.34f;

    char word[] = {'S','O','M','E'};
    char words[] = "Hello World!";

    words[1] = 'G';

    int array[3][3] = {
        {4, 5, 6},
        {7, 234, 4},
        {4, 678, 6}
    };
    printf("%d",array[0][0]);
    return 0;
}