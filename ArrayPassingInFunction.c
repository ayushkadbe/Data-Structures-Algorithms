
#include <stdio.h>
#include <stdlib.h>
//function declaration
int accept(int *array, int n);
int display(int *array, int n);
int count(int *array, int n);


int main(){
    int *array;
    int n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    //memory allocation and function calling
    array = (int*)malloc(n*sizeof(int));
    accept(array,n);
    display(array,n);
    count(array,n);

}

int accept(int *array, int n){
    int j;
    for(j=0;j<n;j++){
        printf("array[%d]", j);
        scanf("%d",array + j);
    }

}

int display(int *array, int n){
    int j;
    for(j=0;j<n;j++){
        printf(" %d", *(array + j));
    }

}

int count(int *array, int n){
    int e_count=0;
    int o_count=0;
    for(int j=0;j<n;j++){
        if(array[j]%2==0)
        e_count++;
        else
        o_count++;
    }
    printf("\n Odd no. = %d",o_count);
    printf("\n Even no. %d",e_count);

}

/*
OUTPUT:
Enter the number of elements:3
array[0]1
array[1]2
array[2]3
 1 2 3
 Odd no. = 2
*/
