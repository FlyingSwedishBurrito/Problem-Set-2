#include<stdio.h>
void pyramid (int i);
int main (void){
    pyramid(9);
}

void pyramid(int h){
    for (int i = 0; i < h; i++){//loops stacks
        for(int q = 0; q <= i; q++){
            printf("#");//individual blocks per stack
        }
        printf("\n");
    }
}