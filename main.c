#include<stdio.h>
#include "bubbleSort.h"

int main() {
    int myArray[] = {33, 44, 55, 11, 22};
    int length = sizeof(myArray) / sizeof(myArray[0]);

    bubbleSort(myArray, length);

    for(int i = 0; i < length; i++){
      printf("%d ", myArray[i]);
    }

    return 0;
}
