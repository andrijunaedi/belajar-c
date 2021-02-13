#include<stdio.h>

int main(){
    int i = 0;
    int Tab[10]= { 1, 50 , 6 , 200, 3, 100, 30, 8, 99, 100 };
    int X = 8;

    while ((Tab[i] != X) && (i < 9)){
        i++;
    }

    if (Tab[i] == X){
        printf("Indexs X bernilai : %d \n", i);
    } else {
        printf("Nilai tidak ditemukan \n");
    }
    
    return 0;
}
