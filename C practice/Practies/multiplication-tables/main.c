/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num * i);
        
    }
    return 0;
}