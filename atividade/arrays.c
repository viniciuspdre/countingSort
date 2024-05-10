#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateArrayValues(int array[], unsigned int length, int maxValue){
    srand(time(NULL));
    for (unsigned int i = 0; i < length; i++){
        array[i] = rand() % maxValue;
    }
}

void printArray(int array[], unsigned int length){
    //printf("====================\nPrinting Array:");
    for (unsigned int i = 0; i < length; i++){
        printf(" %d |", array[i]);
    }
    printf("\b\b");
}

int knowMaxValue(int array[], unsigned int length){
    int value = array[0];
    for (unsigned int i = 1; i < length; i++){
        if (value < array[i]){
            value = array[i];
        }
    }
    return value;
}

int knowMinValue(int array[], unsigned int length){
    int value = array[0];
    for (unsigned int i = 1; i < length; i++){
        if (value > array[i]){
            value = array[i];
        }
    }
    return value;
}

void initializeArray(int array[], unsigned int length){
    for (unsigned int i = 0; i < length; i++){
        array[i] = 0;
    }   
}

void plusArrayIndexes(int array[], unsigned int length){
    for (unsigned int  i = 0; i < length; i++){
        if (i > 0){
             array[i]+=array[i-1];
        }
    }
}