#include <vector>

std::vector<int> increaseVectorElements(const std::vector<int>& inputVector, int n) {
    std::vector<int> resultVector;
    for (int element : inputVector) {
        resultVector.push_back(element + n);
    }
    return resultVector;
}
