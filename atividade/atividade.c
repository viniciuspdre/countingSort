#include "counting_sort.h"

int main(int argc, char argv[]){
    clock_t begin, end;
    int input[] = {5000, 10000, 25000, 50000, 100000, 250000, 500000};
    int input_size = sizeof(input) / sizeof(input[0]); // Calcula o tamanho do array
    double time_spent;

    printf("Ordenando o array usando o COUNTING SORT: \n");
    for (unsigned char i = 0; i < input_size; i++)
    {
        begin = clock();
        countingSort(input[i],1000);
        end = clock();

        time_spent = ((double)(end-begin))/CLOCKS_PER_SEC; //clocks_per_sec
        printf("Tamanho da entrada: %7d | Tempo de execucao: %20.6f segundos\n", input[i], time_spent);
    }
    
}