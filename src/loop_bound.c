#include <stdlib.h>
#include <stdio.h>

void loop_non_negative_inc() {
    for (int i = 0; i<10; i ++) {
        putchar('0' + i);
    }
}

void loop_non_negative_dec() {
    for (int i=9; i>=0; i--) {
        putchar('0' + i);
    }
}

void loop_negative_inc() {
    for (int i=-10; i<0; i++) {
        putchar('9' + 1 + i);
    }
}

void loop_negative_dec() {
    for (int i=-1; i>=-10; i--) {
        putchar('9' + 1 + i);
    }
}

void loop_inc() {
    for (int i=-10; i<=10; i++) {
        printf("%d ", i);
    }
}

void loop_dec() {
    for (int i=10; i>=-10; i--) {
        printf("%d ", i);
    }
}



int main() {
    loop_non_negative_inc();
    putchar('\n');
    loop_non_negative_dec();
    putchar('\n');
    loop_negative_inc();
    putchar('\n');
    loop_negative_dec();
    putchar('\n');
    loop_inc();
    putchar('\n');
    loop_dec();
}
