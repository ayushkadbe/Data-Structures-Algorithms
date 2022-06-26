#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[]={10,20,30,40,50};   
    int *p = arr;    
    int a;

    printf("\n arr[0] = %d, arr[1] = %d, a = %d, *p = %d", arr[0], arr[1],a , *p);

    a= ++*p;
    printf("\n arr[0] = %d, arr[1] = %d, a = %d, *p = %d", arr[0], arr[1],a , *p);
    
    a= ++(*p);
    printf("\n arr[0] = %d, arr[1] = %d, a = %d, *p = %d", arr[0], arr[1],a , *p);
 
    a= *p++;
    printf("\n arr[0] = %d, arr[1] = %d, a = %d, *p = %d", arr[0], arr[1],a , *p);

    a= *(p++);
    printf("\n arr[0] = %d, arr[1] = %d, a = %d, *p = %d", arr[0], arr[1],a , *p);

    a= *++p;
    printf("\n arr[0] = %d, arr[1] = %d, a = %d, *p = %d", arr[0], arr[1],a , *p);

    a= *(++p);
    printf("\n arr[0] = %d, arr[1] = %d, a = %d, *p = %d", arr[0], arr[1],a , *p);   

    a= (*p)++;
    printf("\n arr[0] = %d, arr[1] = %d, a = %d, *p = %d", arr[0], arr[1],a , *p);

}

#include <stdio.h>
int main()
{
    int arr[5] = {100,200,300,400,500};
    int *p = arr;

    int a= (*p)++; //
    printf("\n arr[0] = %d, arr[1] = %d, a = %d, *p = %d", arr[0], arr[1], a, *p);
    
    //++*p is equivalent to ++ (*p). Pre-increment of value
    //increment first the value & assign to BOTH current as well as Next.
    //Associativity: L to R  1)++ increment 2) of *p i.e increment of value

    
    //*p++ will be equivalent to *(p++). Post-increment of address
    //Assign first to current > then increment of address to next
    //Associativity: R to L  1)++ increment 2) of p i.e increment of address, * is separated so it's not *p(value at address) but the p(the address)

    
    //*++p is equivalent to *(++p). Pre-increment of address
    //increment first the address & assign to BOTH current as well as Next.
    //Associativity: L to R  1)++ increment 2) of p i.e increment of address

    //(*p)++
    //Assign first to current > then increment of value to next
    //Associativity: R to L 1)++ increment 2) of (*p) i.e increment of value


    return 0;

}
