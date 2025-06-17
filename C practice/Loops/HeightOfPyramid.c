#include <stdio.h>

int main(){

    int height, i , j;

    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);

    for(i = 1; i <= height; i++){
        for(j = i; j > 0; j--){
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}