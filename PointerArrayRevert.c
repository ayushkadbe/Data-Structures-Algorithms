//PROGRAM 1: C program to REVERT BACK TO original array after making modifications using pointer.

#include <stdio.h>
#include <stdlib.h>


int main(){
    int arr[]={10,20,30,40,50};   
    int *p = arr;    
    int a;

    int length= sizeof(arr)/sizeof(arr[0]);

    int arr2[length];

    for(int i=0; i<length;i++){
        arr2[i]= arr[i];
    }


    printf("\n arr[0] = %d, arr[1] = %d, a = %d, *p = %d", arr[0], arr[1],a , *p);

    a= ++*p;
    printf("\n arr[0] = %d, arr[1] = %d, a = %d, *p = %d", arr[0], arr[1],a , *p);   
    
    p= &arr2;
    a= ++(*p);
    printf("\n arr[0] = %d, arr[1] = %d, a = %d, *p = %d", arr[0], arr[1],a , *p);
    
}


 
