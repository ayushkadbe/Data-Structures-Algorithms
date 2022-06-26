//Write a ‘C’ program to declare variable, pointer variable and pointer to
//pointer variable.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 10;
    int *pvar;
    int *ppvar;
    
     //int *pvar = &n is also same
    pvar= &n;  //pointer to variable
    ppvar= &pvar;  //pointer to pointer

    printf("\n Address of n: %d", &n);
    printf("\n Address of pvar: %d", &pvar);
    printf("\n Address of ppvar: %d", &ppvar);

    printf("\n\n Value of n: %d", n);
    printf("\n Value of pvar(i.e address of n): %d", pvar);
    printf("\n Value of ppvar(i.e address of pvar): %d", ppvar);

    printf("\n\n Value of n:%d", n);
    printf("\n Value of at address assigned to pvar: %d", *pvar);
    printf("\n Value of at address assigned to ppvar: %d", *ppvar);    

}


/*
OUTPUT:
     |          ^

 Address of n: -338570612
 Address of pvar: -338570624
 Address of ppvar: -338570632

 Value of n: 10
 Value of pvar(i.e address of n): -338570612
 Value of ppvar(i.e address of pvar): -338570624

 Value of n:10
 Value of at address assigned to pvar: 10
 Value of at address assigned to ppvar: -338570612┌─[infinitex@infinite]─[~/Documents/vs_code/DS/TEMP]
└──╼ $^C
┌─[✗]─[infinitex@infinite]─[
*/
