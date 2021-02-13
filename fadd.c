#include<stdio.h>

int add(int a, int b){
    return (a + b);
}

int increment(int a){
    return a + 1;
}

int main(){
    int x = 10;
    int y = 25;

    // use function add
    printf("Hasil penjumlahan x + y = %d \n", add(x,y));
    printf("Hasil penjumlahan 3 + 2 = %d \n", add(3,2));

    // use function increment
    printf("nilai x : %d \n", x);
    printf("Nilai x setelah ditambah 1 : %d \n", increment(x));
    printf("Nilai 5 setelah ditambah 1 : %d \n", increment(5));

    return 0;
}
