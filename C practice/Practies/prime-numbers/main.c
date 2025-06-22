/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
        int number, count = 0;
        printf("Enter the number ");
        scanf("%d", &number);
        
        if(number > 1 && number < 999) {
            for(int i = 1; i <= number; i ++){
                if(number % i == 0){
                   count++;
                }
            }
        if(count == 2){
           printf("%d is a prime number",number);
        }
        else {
            printf("%d is not a prime number",number);
        }
        }
}