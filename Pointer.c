#include <stdio.h>
#include <stdlib.h>

int main() {
    int var1= 345;
    int var2[10];
    int *pvar = &var1;
    int *pvar1;
  
    printf("\nAddress of var1 %d", &var1);
    printf("\nAdress of pointer variable pvar %d", pvar);
    printf("\nAddress of pointer variable pvar1 %d", pvar1);
    
    printf("\nValue of var1 %d", var1);
    printf("\nValue of pointer variable pvar %d", *pvar);
    printf("\nValue of pointer variable pvar1 %d", pvar1);

    //signed decimal integer
    printf("\npvar %d",pvar);
    printf("\n*pvar %d", *pvar);
    
    //unsigned decimal integer
    printf("\npvar %u",pvar);
    printf("\n*pvar %u",*pvar);

    //unsigned hexadecimal integer
    printf("\npvar %x",pvar);
    printf("\n*pvar %x",*pvar);
    
    //printing pointer address
    printf("\nprint pointer pvar %p",pvar);
    printf("\nvalue of pointer *pvar %p",*pvar);
  
}

/*
OUTPUT:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int var1= 345;
    int var2[10];
    int *pvar = &var1;
    int *pvar1;
  
    printf("\nAddress of var1 %d", &var1);
    printf("\nAdress of pointer variable pvar %d", pvar);
    printf("\nAddress of pointer variable pvar1 %d", pvar1);
    
    printf("\nValue of var1 %d", var1);
    printf("\nValue of pointer variable pvar %d", *pvar);
    printf("\nValue of pointer variable pvar1 %d", pvar1);

    //signed decimal integer
    printf("\npvar %d",pvar);
    printf("\n*pvar %d", *pvar);
    
    //unsigned decimal integer
    printf("\npvar %u",pvar);
    printf("\n*pvar %u",*pvar);

    //unsigned hexadecimal integer
    printf("\npvar %x",pvar);
    printf("\n*pvar %x",*pvar);
    
    //printing pointer address
    printf("\nprint pointer pvar %p",pvar);
    printf("\nvalue of pointer *pvar %p",*pvar);
  
}
*/
