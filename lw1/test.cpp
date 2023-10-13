#include <gtest/gtest.h>
#include <string>

#include "func.h"

using namespace std;

TEST(test_01, basic_test_set)
{
    int s = 50;
    ASSERT_EQ(closest_pair_tonum(s), "45 36");
}

TEST(test_02, basic_test_set)
{
    int s = 10;
    ASSERT_EQ(closest_pair_tonum(s), "5 4");
}

TEST(test_03, basic_test_set)
{
    int s = 1234;
    ASSERT_EQ(closest_pair_tonum(s), "1233 792");
}

TEST(test_04, basic_test_set)
{
    int s = 678;
    ASSERT_EQ(closest_pair_tonum(s), "677 52");
}

TEST(test_05, basic_test_set)
{
    int s = 23645;
    ASSERT_EQ(closest_pair_tonum(s), "23642 8758");
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
