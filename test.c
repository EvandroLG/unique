#include "unique.h"
#include <assert.h>

int main() {
    int array[6] = { 10, 20, 30, 10, 40, 20 };
    int *output;
    *output = unique(array, 6);

    assert(output[0] == 10);
    assert(output[1] == 20);
    assert(output[2] == 30);
    assert(output[3] == 40);
}
