#include <list>
#include <stdio.h>

using namespace std;

int main() {
    list<int> dataList;
    dataList.push_back(1);
    dataList.push_back(2);
    dataList.push_back(3);
    printf("%d", dataList.back());
}
