// Write a ‘C’ program to accept ‘n’ integers and find sum of that integers using pointer concept.

#include <stdio.h>
#include <stdlib.h>

int main(){
    //accept numbers
    int i,n,sum=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int *ptr = arr;
    for(i=0;i<n;i++){
        sum = sum + *ptr;
        ptr++;
    }

    printf("SUM: %d", sum);

}

/*
OUTPUT:
Enter the number of elements: 3
Enter the elements:1 2 3
SUM: 6┌─[
*/
