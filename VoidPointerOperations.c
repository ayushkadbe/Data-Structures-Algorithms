/*Write a ‘C’ program to find sum, subtraction and product of two numbers using
following function prototype.
void operations(int n1, int n2, int *sum, int *sub, int *product);
*/

#include <stdio.h>
#include <stdlib.h>
void operation(int n1, int n2, int *sum, int *sub, int *product);

int main(){
    int n1,n2, sum, sub, product;
    printf("Enter the two numbers: ");
    scanf("%d%d",&n1,&n2);
    operation(n1,n2,&sum, &sub, &product);
    //Declare > Pass(Assign) > Return(printf)
    //&sum , &sub are used to Pass Values to Operation function to assign them to Pointer like *sum = &sum, *sub = &sub

}

void operation(int n1, int n2, int *sum, int *sub, int *product){
    *sum = n1+n2;
    *sub = n1-n2;
    *product= n1*n2;
    printf("\n Sum: %d", *sum);
    printf("\n Sub: %d", *sub);
    printf("\n product: %d", *product);
}

/*
OUTPUT
Enter the two numbers: 23 23

 Sum: 46
 Sub: 0
 product: 529┌
 */
