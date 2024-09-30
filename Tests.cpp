#include <gtest/gtest.h>
#include <vector>

std::vector<int> increaseVectorElements(const std::vector<int>& inputVector, int n) {
    // implementation remains the same
}

TEST(IncreaseVectorElementsTest, EmptyVector) {
    std::vector<int> inputVector;
    int n = 2;
    std::vector<int> resultVector = increaseVectorElements(inputVector, n);
    EXPECT_TRUE(resultVector.empty());
}

TEST(IncreaseVectorElementsTest, SingleElement) {
    std::vector<int> inputVector = {1};
    int n = 2;
    std::vector<int> resultVector = increaseVectorElements(inputVector, n);
    EXPECT_EQ(resultVector.size(), 1);
    EXPECT_EQ(resultVector[0], 3);
}

TEST(IncreaseVectorElementsTest, MultipleElements) {
    std::vector<int> inputVector = {1, 2, 3, 4, 5};
    int n = 2;
    std::vector<int> resultVector = increaseVectorElements(inputVector, n);
    EXPECT_EQ(resultVector.size(), 5);
    EXPECT_EQ(resultVector[0], 3);
    EXPECT_EQ(resultVector[1], 4);
    EXPECT_EQ(resultVector[2], 5);
    EXPECT_EQ(resultVector[3], 6);
    EXPECT_EQ(resultVector[4], 7);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
