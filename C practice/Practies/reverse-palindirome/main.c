/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
        int num, remain, reverse = 0;
        printf("Enter the num :");
        scanf("%d", &num);
        
        int temp = num;
        
        while(num > 0){
            remain = num % 10;
            reverse = reverse * 10 + remain;
            num /=10;
        }
        
        printf("Reversed value = %d\n", reverse);
        
        if(temp == reverse){
            printf("It is a palindrome");
        }
        else{
            printf("not palindrome");
        }
    
    

    return 0;
}
