#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void bad() {
    char * data;
    char data_buf[100] = "ping 127.0.0.1 ";
    data = data_buf;

    size_t dataLen = strlen(data);
    char * environment = getenv("ADD");
    if (environment != NULL) {
        strncat(data+dataLen, environment, 100-dataLen-1);
    }
    if (system(data)!=0) {
        puts("command execution failed!");
        exit(1);
    }
}

int main(int argc, char **argv) {
    bad();
}
