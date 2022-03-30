#include <stdlib.h>
#include <stdio.h>

typedef struct _twoIntsStruct
{
    int intOne;
    int intTwo;
} twoIntsStruct;

void printIntLine(int intNumber) {
    printf("%d\n", intNumber);
}

int main() {
    twoIntsStruct * data;
    data = NULL;
    printIntLine(data->intOne);
}
