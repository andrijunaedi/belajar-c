#include<stdio.h>

int main(){
    int a;

    printf("Contoh IF satu kasus \n");
    printf("Ketikkan satu nilai integer :");
    scanf("%d", &a);

    if (a >= 0){
        printf("Nilai a positif %d \n", a);
    }
    
    return 0;
}

