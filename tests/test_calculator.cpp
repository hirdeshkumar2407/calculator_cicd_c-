#include <gtest/gtest.h>
#include "../src/calculator.h" // Include the header file only

TEST(ProblemCheckAddition, add) {
    Calculator calc;
    EXPECT_EQ(calc.add(4, 3), 7);
    EXPECT_EQ(calc.add(4192, -2048), 2144);
}

TEST(ProblemSubtraction, sub) {
    Calculator calc;
    EXPECT_EQ(calc.subtract(4, 3), 1);
    EXPECT_EQ(calc.subtract(4192, -2048), 6240);
}

TEST(ProblemMultiplication, mul) {
    Calculator calc;
    EXPECT_EQ(calc.multiply(4, 3), 12);
    EXPECT_EQ(calc.multiply(12, 12), 144);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
