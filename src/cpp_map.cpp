#include <map>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main() {
    map<int, char *> dataMap;
    char * data = (char *)malloc(100);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    printf("%s", dataMap[0]);
}
