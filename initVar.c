#include<stdio.h>

int main(){
    int i;
    float f = 0.555;
    float x = 1.5E3;

    i = 5;
    printf("Ini nilai i : %d \n", i);

    i = i + 1;
    printf("Ini nilai i : %d \n", i);

    // Init float variable
    printf("Ini nilai f : %f \n", f);
    printf("Ini nilai f : %5.2f \n", f);
    printf("Ini nilai x : %10.2f \n", f);

    return 0;
}