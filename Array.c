//C Program to Copy elements of one Array into Another Array.

#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int arr[]={1,2,3,4,5};

    //length of arr
    int length = sizeof(arr)/sizeof(arr[0]);

    //create new array
    int arr2[length];

    //Copy the elements
    for(int i=0; i<length; i++){
        arr2[i]= arr[i];
    }

    //print elements of array 1;
    for(int i=0;i<length; i++){
        printf(" %d", arr[i]);
    }

    printf("\n");

    //print elements of array 2;
    for(int i=0;i<length;i++){
        printf(" %d", arr2[i]);
    }
    return 0;
}

//ARRAY passing through a function
// Program to calculate the sum of array elements by passing to a function

#include <stdio.h>
#include <stdlib.h>

float sumfun(float num[]);

int main(){
    float result, num[] = {1.2, 2.3, 3.4, 4.5, 5.6};

    result= sumfun(num); //passing array in function
    printf("\n Sum: %.2f", result);


}

float sumfun(float num[]){
    float sum= 0.0;

    for(int i=0; i<5; i++){
        sum += num[i];

    }

    return sum;

}
