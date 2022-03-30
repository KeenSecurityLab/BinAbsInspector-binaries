#include <vector>
#include <stdio.h>

using namespace std;

int main() {
    vector<int> dataVector;
    dataVector.insert(dataVector.end(), 1, 1);
    dataVector.insert(dataVector.end(), 1, 2);
    dataVector.insert(dataVector.end(), 1, 3);
    printf("%d", dataVector[0]);
    printf("%d", dataVector[3]);
}
