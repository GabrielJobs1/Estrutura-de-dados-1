#include<stdio.h>
void main(){
    int V[5];
    int i;
    for( i = 0; i < 5; i++){
        V[i] = (i+5*i)%(i+1);
        printf("Valor do vetor na posição %d :\n %d\n", i ,V[i]);
    }
}