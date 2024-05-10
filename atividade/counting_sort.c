#include "arrays.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void countingSort(unsigned int length, unsigned int value)
{
    int unorderedNumbers[length]; //array desordenado
    generateArrayValues(unorderedNumbers, length, value); //aqui estou usando uma função para gerar seus valores aleatorios
    int maxValue = knowMaxValue(unorderedNumbers, length) + 1; //estou encontrando o maior valor dentro desse array e somando mais um
    int countingArray[maxValue]; //crio um array de contagem com o tamanho que encontrei anteriormente
    initializeArray(countingArray, maxValue);

    for (unsigned int j = 0; j < length; j++) //irei enumerar o array de contagem, somando 1 em cada indice, isso indica quantos daquele valor eu tneho no array original
    {
        countingArray[unorderedNumbers[j]]++; //aqui eu faço a soma, sempre somando 1 no indice do valor que eu encontrar no array original 
    }
    
    
    //printArray(unorderedNumbers, length); //exibo o array desordenado
    //printf("\n\n");
    //printArray(countingArray, maxValue); //exibo o array de contagem
    //printf("\n\n");

    int orderedNumbers[length]; //crio o array ordenado
    plusArrayIndexes(countingArray, maxValue); //soma os indices do array i com i+1, para manter a originalidade do array inicial
    for (unsigned int j = 0; j < maxValue; j++) //subtraio um de cada no array de contangem
    {
        countingArray[j]--; //isso servirá para organizar o array, visto que nos videos do yt os arrays dos professores começam em 1, diferente da vida real
    }
    //printArray(countingArray, maxValue); //exibo o array de contagem apos a soma
    //printf("\n\n");

    for (unsigned int j = 0; j < length; j++) //for para organizar o array ordenado
    {
        orderedNumbers[countingArray[unorderedNumbers[j]]] = unorderedNumbers[j]; //explico na apresentação pq é mt comprexo de escrever em palavras
        countingArray[unorderedNumbers[j]]--; //subtraio um de cada indice que eu ordenar
    }
    

    //printArray(orderedNumbers, length); //exibo o array ordenado
    //abraços jobson <3
}