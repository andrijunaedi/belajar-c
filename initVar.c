#include<stdio.h>

int main(){
    int i;
    float f = 0.555;
    float x = 1.5E3;
    char c = 18;
    char name;

    i = 5;
    printf("Ini nilai i : %d \n", i);

    i = i + 1;
    printf("Ini nilai i : %d \n", i);

    // Init float variable
    printf("Ini nilai f : %f \n", f);
    printf("Ini nilai f : %5.2f \n", f);
    printf("Ini nilai x : %10.2f \n", f);

    // print char as alphabet
    printf("Karakter = %c\n", c);

    name = 'Andri';
    printf("Karakter = %c\n", name);

    // print char
    printf ("Karakter dalam kode ASCII = %d\n", c);
    printf ("Karakter sebagai huruf = %c\n", c);
    printf ("Karakter dalam kode ASCII = %d\n", name);
    printf ("Karakter sebagai huruf = %c\n", name);

    return 0;
}