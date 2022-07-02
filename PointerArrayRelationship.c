//C Program to accept elements of array and use Pointer Variable to access elements
/*
Pointer to Array*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int n,i;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int arr[n];
 
    printf("Enter elements:");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //Access Array Element List using pointer
    for(i=0;i<n;i++){
        printf(" %d",*(arr + i));
    }
    printf("\n");
         //OR

    int *ptr = &arr[i];
    for(i=0; i<n; i++){
        printf(" %d", arr[i]);
    }
    
    //Access individual elments of array using pointer
    //i. arr[i] ii.&arr[i] iii.ptr iv.*ptr v.*(arr+i) vi. i[arr]
  
    printf("\n %d", *(arr));         //arr[0] = *(arr) and &arr[0] = arr
    printf("\n %d", *(arr + 1));     //arr[1] = *(arr + 1) and &arr[1] = arr + 1

    printf("\n Change Element 3:");
    scanf("\n %d", &arr[2]);         //arr[2] = *(arr = 2) and &arr[2] = arr + 2
    printf("\n %d", *(arr + 2));
  

    printf("\n %d",*ptr);
    printf("\n %d", ptr); 

}

/*
OUTPUT:
$cd "/home/infinitex/Documents/vs_code/DS/TEMP/" && gcc temp6.c -o temp6 && "/home/infinitex/Documents/vs_code/DS/TEMP/"temp6
Enter the number of elements:3
Enter elements:11 12 13
 11 12 13
 11 12 13
 11
 12
 Change Element 3:14

 14
 21899
 -1427353204┌─[infinitex@infinite]─[~/Documents/vs_code/DS/TEMP]
└──╼ $
*/
