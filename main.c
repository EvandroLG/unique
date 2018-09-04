#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void push(int array[], int *index, int value) {
    array[*index] = value;
    *index = *index + 1;
}

int unique(int array[], int size) {
    int *output = malloc(size * sizeof(int));
    int output_index = 0;
    int current_value;
    bool has_value;

    for (int i = 0; i < size; i++) {
        current_value = array[i];
        has_value = false;

        for (int j = 0; j < size; j++) {
            if (current_value == output[j]) {
               has_value = true;
            }
        }

        if (has_value == 0) {
            push(output, &output_index, current_value);
        }
    }

    return *output;
}
