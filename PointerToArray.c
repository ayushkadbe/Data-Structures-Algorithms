//PROGRAM 1: TRAVERSING AN ARRAY THROUGHT POINTER USING A FOR LOOP

#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int *p = arr;

    //traversing an array throught pointer using a for loop
    for(int i=0; i<5;i++){
        printf("%d ",*(p+i));  //*(p+i) i.e Value incremented by i till i=5;
    }
}


//PROGRAM 2: POINTER TO FUNCTION IN C


/*
Create pointer variable with function declaration
assign address of function to pointer
call the pointer to call the function*/

#include <stdio.h>
#include <stdlib.h>
int multiplication();

int main(){
    int (*ptr)(); //create
    ptr = &multiplication; //assign address
    int result = (*ptr)();  //call
    
}

int multiplication(){
    int a,b;
    printf("\n Enter two variables: ");
    scanf("%d%d",&a,&b);
    printf("\n The product of a * b is %d", a*b);
}

//PROGRAM 3: POINTER TO ARRAY OF FUNCTION IN C

/*Basically, an array of the function is an array which contains the addresses of functions. In other words, the pointer 
to an array of functions is a pointer pointing to an array which contains the pointers to the functions. Consider the following example.*/

/*ALGORITHM:
1. declare an array function
2. declare an pointer to array function.
2. create elements of array: Pointers/Address to functions
2. initialize pointer to array of functions(address/pointer to function)
3. create a object to call pointer to element 1 of array of function i.e (double pointer)
4. Call pointer to array of function i.e (double pointer)
5. Call pointer + 1 to call Element 2 of array of function(passing value of pointer to array)
*/
#include <stdio.h>
#include <stdlib.h>
int show();
int showadd(int);
int (*arr[3])();
int (*(*ptr)[3])();

int main(){
    arr[0] = show;
    arr[1] = showadd;
    ptr = &arr;
    int result = (**ptr)();
    printf("\n Print Pointer to Array Value:%d", result);
    (*(*ptr+1))(result);

}

int show(){
   int a = 60;
   return a++;
}

int showadd(int b){
    printf("\n Add 50 to number passed by result: %d", b+ 50);
    
}
