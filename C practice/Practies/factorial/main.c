#include <stdio.h>

int main(){
    
    int n, i;
    unsigned long long fact = 1;
    
    printf("enter the number : ");
    scanf("%d",&n);
    
    for(i = 1; i <= n; ++i){
        fact*=i;
    }
            printf("the factorial = %llu\n",fact);
    
    
    return 0;
}