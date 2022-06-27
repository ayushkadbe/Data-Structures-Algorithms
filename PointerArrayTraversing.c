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
