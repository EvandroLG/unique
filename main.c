#include <stdio.h>
#include <stdlib.h>

int unique(int array[], int size) {
    int *output = malloc(size * sizeof(int));
    int output_index = 0;
    int current_value, has_value;

    for (int i = 0; i < size; i++) {
        current_value = array[i];
        has_value = 0;

        for (int j = 0; j < size; j++) {
            if (current_value == output[j]) {
               has_value = 1; 
            }
        }

        if (has_value == 0) {
            output[output_index] = current_value;
            output_index = output_index + 1;
        }
    }

    return *output;
}
