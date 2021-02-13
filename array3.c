#include<stdio.h>

int main(){
    int i;
    int Tab[10]= { 1, 50 , 6 , 200, 3, 100, 30, 8, 99, 100 };
    int max = Tab[0];

    for ( i = 0; i < 10; i++){
        if(Tab[i] > max){
            max = Tab[i];
        }
    }
    printf("Nilai max = %d \n", max);

    return 0;
}
