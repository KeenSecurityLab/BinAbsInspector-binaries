#include <stdlib.h>
#include <stdio.h>

void set_idx(int *array, int idx, int value) {
    array[idx] = value;
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    array[25] = 100;
    set_idx(array, 25, 100);
    return 0;
}
