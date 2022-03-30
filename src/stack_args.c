#include <stdio.h>
#include <stdlib.h>

int foo3(int a, int b, int c) {
    return 1004;
}

int foo2(int a, int b) {
    return foo3(a, b, 1003);
}

int foo1(int a) {
    return foo2(a, 1002);
}

int foo4(int a, int b, int c, int d, int e, int f, int g, int h) {
    return a + b + c + d + e + f + g + h;
}

int main() {
    foo1(1001);
    foo4(1, 2, 3, 4, 5, 6, 7, 8);
    return 0;
}
