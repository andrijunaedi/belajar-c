#include<stdio.h>

int main(){
    int Tab[5] = {1, 2, 3, 4, 5};
    float TabX[3] = {1.5, 3.5E2, 9.99};
    char TabChar[4] = {'1', '2', 'A', 'Z'};

    int i;

    for ( i = 0; i < 5; i++){
        printf("Tab[%d] = %d \n", i, Tab[i]);
    }
    printf("\n");

    int j;
    for ( j = 0; j < 4; j++){
        printf("TabChar[%d] = %c \n", j, TabChar[j]);
    }
    
    return 0;
}
