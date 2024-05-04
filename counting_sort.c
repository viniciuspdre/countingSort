#include "..\funcoes_importantes\arrays.c"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int input[] = {5000, 10000, 25000, 50000, 100000, 250000, 500000}; //array com o tamanho que o array desordenado terá em cada teste
        int unorderedNumbers[10]; //array desordenado
        generateArrayValues(unorderedNumbers, 10, 20); //aqui estou usando uma função para gerar seus valores aleatorios
        int maxValue = knowMaxValue(unorderedNumbers, 10) + 1; //estou encontrando o maior valor dentro desse array e somando mais um
        int countingArray[maxValue]; //crio um array de contagem com o tamanho que encontrei anteriormente
        initializeArray(countingArray, maxValue);

        for (unsigned int j = 0; j < 10; j++)
        {
            countingArray[unorderedNumbers[j]]++;
        }
        
        
        printArray(unorderedNumbers, 10);
        printf("\n\n");
        printArray(countingArray, maxValue);
        printf("\n\n");

        int orderedNumbers[10];
        plusArrayIndexes(countingArray, maxValue); //soma os indices do array para manter um negocio que vou ver dps
        for (unsigned int j = 0; j < maxValue; j++)
        {
            countingArray[j]--;
        }
        printArray(countingArray, maxValue);
        printf("\n\n");

        for (unsigned int j = 0; j < 10; j++)
        {
             orderedNumbers[countingArray[unorderedNumbers[j]]] = unorderedNumbers[j];
             countingArray[unorderedNumbers[j]]--;
        }
        

        printArray(orderedNumbers, 10);
    return 0;
}