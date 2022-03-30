#include <stdlib.h>
#include <stdio.h>

void loop1(int c) {
    for (int i=c; i<10; i++) {
        printf("%d\n", i);
    }
}

void loop2()  {
    for (int i=0; i<10; i++) {
        for (int j=i; j<5; j++) {
            printf("%d %d\n", i, j);
        }
    }
}

void func_b(int b, int c) {
    loop1(b);
}

void func_a(int a, int b, int c) {
    func_b(b, c);
}


int main() {
    func_a(1, 2, 3);
    loop2();
}
