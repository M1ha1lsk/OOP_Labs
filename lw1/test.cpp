#include <gtest/gtest.h>
#include <string>

#include "func.h"

using namespace std;

TEST(test_01, basic_test_set)
{
    long long int s = 5;
    ASSERT_EQ(decimalToBinary(s), "00000000000000000000000000000101");
}

TEST(test_02, basic_test_set)
{
    long long int s = 456;
    ASSERT_EQ(decimalToBinary(s), "00000000000000000000000111001000");
}

TEST(test_03, basic_test_set)
{
    long long int s = 12345679;
    ASSERT_EQ(decimalToBinary(s), "00000000101111000110000101001111");
}

TEST(test_04, basic_test_set)
{
    long long int s = 0;
    ASSERT_EQ(decimalToBinary(s), "00000000000000000000000000000000");
}

TEST(test_05, basic_test_set)
{
    long long int s = 123;
    ASSERT_EQ(decimalToBinary(s), "00000000000000000000000001111011");
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
