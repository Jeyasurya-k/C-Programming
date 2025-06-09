#include <stdio.h>

int main()
{
    char val  = 100;
    printf("char value is : %d\n", val);
    printf("char address is : %p\n", &val);
    
    //read operation
    char* pAddress = &val;
    char valAddress = *pAddress;
    printf("read value : %d\n", valAddress);
    
    //write opeartion
    *pAddress = 65;
    printf("the valu is : %d\n", val);
    
    
    


    return 0;
}