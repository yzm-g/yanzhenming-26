include <stdio.h>
#include <stdlib.h>



void bubbleSort(int arr[], int arrSize){
    int tmp = 0;
    int swap = 1;
    while(swap){
        swap = 0;
        for(int i = 0; i < (arrSize -1); i++){
            if(arr[i] > arr[i + 1]){
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                swap = 1;
            }
        }
    }

    return;

}


void outArr(int arr[], int arrSize){
    for(int i = 0; i < arrSize; i++){
        printf("%d\t", arr[i]);
    }
         }
    printf("\n");

    return;
}
int main (int argc,char **argv)

{
    int arr[] = {33, 9, 64, 15, 26, 57, 4};
    int arrSize = sizeof(arr)/sizeof(int);
    outArr(arr, arrSize);

    bubbleSort(arr, arrSize);
    outArr(arr, arrSize);


    return 0;
}
                                                  
